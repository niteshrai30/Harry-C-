#include<iostream>
using namespace std;

class Complex;           // Forward declaration..

class Calculator
{
    public:
        int add(int a,int b)
        {
            return ( a + b);
        
        }   
int sumRealComplex(Complex,Complex);
int sumCompComplex( Complex,Complex);

};

class Complex
{
    int a,b;

    friend class Calculator;

    public :
        void setnumber(int n1,int n2)
        {
            a = n1;
            b = n2;
        }

        void printnumber(void)
        {
            cout << "Your number is " << a << " + "<< b <<" i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1,Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex( Complex o1,Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1,o2;
    o1.setnumber(1,4);
    o1.printnumber();

    o2.setnumber(5,7);
    o2.printnumber();
    
    Calculator calc;

    int res = calc.sumRealComplex(o1,o2);
    cout << "The sum of the real part of the o1 and o2 is " << res << endl;

    int resc = calc.sumCompComplex(o1,o2);
    cout << "The sum of the Complex part of the o1 and o2 is " << resc << endl;


    return 0;
}

