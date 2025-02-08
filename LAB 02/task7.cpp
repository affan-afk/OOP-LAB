// Muhammad Affan Rasheed (24K-0579)
#include <iostream>
using namespace std;

int** creatematrice(int rows, int col) {
    int** mat = new int*[rows];
    for (int i = 0; i < rows; i++) {
        mat[i] = new int[col];
    }
    cout << "memory allocated!" << endl;
    return mat;
}

void populateMatrix(int** mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "enter value for row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> *(*(mat + i) + j);
        }
    }
}

void displayMatrix(int** mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << *(*(mat + i) + j) << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(int** mat1, int** mat2, int** result, int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(*(result + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }
}

void freemem(int** mat1, int** mat2, int** result, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] result[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] result;
    cout << "memory freed!" << endl;
}

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    int** mat1 = creatematrice(rows1, cols1);
    int** mat2 = creatematrice(rows2, cols2);
    cout << "for matrix 1:" << endl;
    populateMatrix(mat1, rows1, cols1);
    cout << "for matrix 2:" << endl;
    populateMatrix(mat2, rows2, cols2);
    cout << "matrix 1:" << endl;
    displayMatrix(mat1, rows1, cols1);
    cout << "matrix 2:" << endl;
    displayMatrix(mat2, rows2, cols2);
    int** result = creatematrice(rows1, cols2);
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
    cout << "result of matrix multiplication:" << endl;
    displayMatrix(result, rows1, cols2);
    freemem(mat1, mat2, result, rows1);
    return 0;
}
