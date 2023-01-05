#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public :
        Complex(int ,int); //Constructor Declaration..
                             //  This is a parameterised 
                       //constructor as it takes two parameter..


        void printNumber()
        {
            cout <<"Your Number is "<< a << " + " << b <<" i" << endl;
        }
            
};
Complex :: Complex(int x,int y) 
{
    a = x;
    b = y;
}

int main(void)
{
    Complex a(4,5);
    a.printNumber();

    Complex b = Complex(6,7);
    b.printNumber();

    return 0;
}