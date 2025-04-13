//muhammad affan rasheed (24-0579) 
#include <iostream>
using namespace std;
class Matrix2x2{
   int e1;
   int e2;
   int e3;
   int e4;
   public:
   Matrix2x2(int e1 = 0, int e2 = 0, int e3 = 0, int e4 = 0):e1(e1),e2(e2),e3(e3),e4(e4){}
   Matrix2x2 operator+(Matrix2x2 m){
    return Matrix2x2(e1+m.e1,e2+m.e2,e3+m.e3,e4+m.e4);
   }
   Matrix2x2 operator-(Matrix2x2 m){
    return Matrix2x2(e1-m.e1,e2-m.e2,e3-m.e3,e4-m.e4);
   }
   Matrix2x2 operator*(Matrix2x2 m){
    return Matrix2x2(e1*m.e1+e2*m.e3,e1*m.e2+m.e4,e3*m.e1+e4*m.e3,e3*m.e2+e4*m.e4);
   }
   friend int Determinant (Matrix2x2 m);
   friend ostream & operator<<(ostream & os, Matrix2x2 m ){
    os<<m.e1<<" "<<m.e2<<endl<<m.e3<<" "<<m.e4<<endl;
    return os;
   }
   friend class MatrixHelper;
};
int Determinant(Matrix2x2 m){
    return (m.e1*m.e4-m.e2*m.e3);
}
class MatrixHelper{
    public:
    void updateElement(Matrix2x2& m , int r, int c,int num){
        if (r = 1 && c == 1 )
        {
            m.e1 = num;
        }
        else if (r = 1 && c == 2)
        {
            m.e2 = num;
        }
        else if( r = 2 && c == 1)
        {
            m.e3 = num;
        }
        else if (r = 2 && c == 2)
        {
            m.e4 = num;
        }
        else{
            cout<<"sahi index to de"<<endl;
        }
    }
};
int main() {
    Matrix2x2 matrix(3, 4, 11, 64);
    Matrix2x2 aik_aur_matrix(7, 3, 8, 33);
    Matrix2x2 temp;

    cout << "Matrix 1:" << endl << matrix << endl;
    cout << "Matrix 2:" << endl << aik_aur_matrix << endl;

    temp = matrix + aik_aur_matrix;
    cout << "Addition Result:" << endl << temp << endl;

    temp = matrix - aik_aur_matrix;
    cout << "Subtraction Result:" << endl << temp << endl;

    temp = matrix * aik_aur_matrix;
    cout << "Multiplication Result:" << endl << temp << endl;

    cout << "Determinant of the result matrix: " << Determinant(temp) << endl << endl;

    MatrixHelper me;
    me.updateElement(temp, 1, 1, 3322);
    cout << "Matrix after updating element (1,1) to 3322:" << endl << temp << endl;

    return 0;
}
