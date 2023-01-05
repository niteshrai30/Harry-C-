#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
    Complex(void); // Constructor declaration..should be declared in public section of the class. 

    void printNumber(void)
    {
        cout <<"Your Number is "<< a <<" + "<< b <<" i "<<endl;
    }
};

Complex :: Complex(void)     // it is default constructor because it does not take any argument
{                            // or parameter.
    a=10;
    b=20;
}


int main(void)
{
    Complex c1,c2,c3;

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}