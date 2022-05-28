#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
    float real;
    float imag;
public:
    Complex(): real(0), imag(0){ }
    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    Complex operator - (Complex c2)
    {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;

        return temp;
    }

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex operator * (Complex obj){
        Complex temp;
        temp.real=(real*obj.real)-(imag*obj.imag);
        temp.imag=(real*obj.imag)+(imag+obj.imag);
        return (temp);
    }

        void output()
    {
        if(imag < 0)
            cout << "Output Complex number: "<< real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex c1, c2, result1,result2,result3;
    cout<<"Enter first complex number\n";
    c1.input();
    cout<<"Enter second complex number\n";
    c2.input();
    result1 = c1 - c2;
    result2 = c1 + c2;
    result3 = c1 * c2;
    result1.output();
    cout<<"\n";
    result2.output();
    cout<<"\n";
    result3.output();

    return 0;
}