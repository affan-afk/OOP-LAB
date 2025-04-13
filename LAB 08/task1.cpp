//muhammad affan rasheed (24K-0579)
#include <iostream>
#include <cmath>
using namespace std;
class Complex{
    double real,img;
    public:
    Complex(double real = 0.0, double img = 0.0) : real(real), img(img){} 
    Complex operator+(const Complex &obj)const{ 
        return Complex(this->real+obj.real,this->img+obj.img);
    }
    Complex operator-(const Complex &obj)const{ 
        return Complex(this->real-obj.real,this->img-obj.img);
    }
    Complex operator*(const Complex &obj)const{ 
        return Complex(this->real*obj.real,this->img*obj.img);
    }
    Complex operator/(const Complex &obj)const{ 
        return Complex(this->real/obj.real,this->img/obj.img);
    }
    double magnitude(){
        return sqrt((real * real + img * img));
    }
    friend ostream& operator<<(ostream& os, const Complex& obj){
        os << obj.real <<" + ("<<obj.img<<")i"<<endl;
        return os;
    }
};
int main(){
    Complex c1(2,4);
    Complex c2(6,8);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3<<endl;
    c3 = c1 - c2;
    cout<<c3<<endl;
    c3 = c1 * c2;
    cout<<c3<<endl;
    c3 = c1 / c2;
    cout<<c3<<endl;
    c3 = c1.magnitude() + c2.magnitude();
    cout<<c3<<endl;
}
