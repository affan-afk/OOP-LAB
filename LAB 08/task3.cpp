//muhammad affn rasheed (24k-0579)
#include <iostream>
using namespace std;

class Vector2D {
private:
    double x, y;

public:
    Vector2D(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& obj) const {
        return Vector2D(x + obj.x, y + obj.y);
    }

    Vector2D operator-(const Vector2D& obj) const {
        return Vector2D(x - obj.x, y - obj.y);
    }

    Vector2D operator*(double scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }

    friend double dotProduct(const Vector2D& obj1, const Vector2D& obj2);

    friend ostream& operator<<(ostream& os, const Vector2D& obj);
};

double dotProduct(const Vector2D& obj1, const Vector2D& obj2){
    return obj1.x * obj2.x + obj1.y * obj2.y;
}

ostream& operator<<(ostream& os, const Vector2D& obj) {
    os << "(" << obj.x << ", " << obj.y << ")";
    return os;
}

int main() {
    Vector2D vector_1(2.33, 31.88);
    Vector2D vector_2(32.30, 5.5);

    Vector2D sum_vector = vector_1 + vector_2;
    Vector2D diff = vector_1 -vector_2;
    Vector2D scaled = vector_2 * 7.823;
    double dot = dotProduct(vector_1, vector_2);

    cout << "vector 1: " << vector_1 << endl;
    cout << "and vector 2: " << vector_2 << endl;
    cout << "Sum : " << sum_vector << endl;
    cout << "difference: " << diff << endl;
    cout << "Scaled vector 1 (by 7.823): " << scaled << endl;
    cout << "Dot product of vector 1 and vector 2 : " << dot << endl;
}
