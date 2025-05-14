#include <iostream>
#include <exception>
using namespace std;

class DimensionMismatchException : public exception {
    int r1, c1, r2, c2;
public:
    DimensionMismatchException(int r1, int c1, int r2, int c2)
        : r1(r1), c1(c1), r2(r2), c2(c2) {}

    const char* what() const throw() {
        static string msg;
        msg = "DimensionMismatchException - Matrices must have same dimensions (" +
              to_string(r1) + "x" + to_string(c1) + " vs " +
              to_string(r2) + "x" + to_string(c2) + ")!";
        return msg.c_str();
    }
};

template <typename T>
class Matrix {
    T** data;
    int rows, cols;
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new T*[r];
        for (int i = 0; i < r; ++i)
            data[i] = new T[c]{};
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i)
            delete[] data[i];
        delete[] data;
    }

    Matrix<T> operator+(const Matrix<T>& other) {
        if (rows != other.rows || cols != other.cols)
            throw DimensionMismatchException(rows, cols, other.rows, other.cols);
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }
};

int main() {
    try {
        Matrix<int> A(2, 2);
        Matrix<int> B(3, 3);
        Matrix<int> C = A + B;
    } catch (const DimensionMismatchException& ex) {
        cout << ex.what() << endl;
    }
    return 0;
}