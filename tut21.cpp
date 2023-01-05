#include<iostream>
using namespace std;

class employee{
    private :
            int a,b,c;

    public : 
            int d,e;

            void setdata(int a1,int b1,int c1);          // declaration..a ,b,c can be access by members of the class only.
            
            void getdata(){

                cout << "The value of a is :" << a << endl;
                cout << "The value of b is :" << b << endl;
                cout << "The value of c is :" << c << endl;
                cout << "The value of d is :" << d << endl;
            }
};

void employee :: setdata(int a1,int b1,int c1){

    a = a1;
    b = b1;
    c = c1;
}



int main(void)
{
    employee xyz;
    //xyz.a = 100;            // it will give error because member a is private to the class.So, we cannot access it.
    xyz.d = 40;              // members d,e are public we can directly access it.
    xyz.e = 50;
    xyz.setdata (10,20,30);
    xyz.getdata();

    return 0;
}