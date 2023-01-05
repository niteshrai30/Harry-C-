#include<iostream>
using namespace std;

class complex
{
    int a,b;
    friend complex sumcomplex(complex o1,complex o2);
    
    // We can declare friend function anywhere in the class independent of the public or private..

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

 // if we do not make sumcomplex function friend function to the class
 //then we can not access the private member of the class.

complex sumcomplex(complex o1,complex o2) 
{
    complex o3;
    o3.setnumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main(void)
{
    complex c1,c2,sum;
    c1.setnumber(3,4);
    c1.printnumber();

    c2.setnumber(5,6);
    c2.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}