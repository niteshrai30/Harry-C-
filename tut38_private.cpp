
#include<iostream>
using namespace std;

 class Base{
    int data1;        // this is private and it will not be Inheritable..
    public :
        int data2;
        void setData();
        int getData1();
        int getData2();

 };

 void Base :: setData()
 {
    data1 = 10;
    data2 = 20;
 }

 int Base ::getData1(void)
 {
    return data1;
 }

 int Base ::getData2(void)
 {
    return data2;
 }

 class Derived : private Base      // Derived class can  access all members of the Base class..
 {                                // but those memberws will be Private to the Derieved class.
    int data3;
    public :
        void process();
        void Display();
 };

void Derived :: process ()
{
    setData();
    data3 = data2 * getData1();
}

void Derived :: Display()
{
    cout << "Value of Data1 is " << getData1() << endl;
    cout << "Value of Data2 is " << data2 << endl;
    cout << "Value of Data3 is " << data3 << endl;
}

int main(void)
{
    Derived der;
   // der.setData();        //We cannot access it is pprivate member
    der.process();
    der.Display();

    return 0;
}