#include<iostream>
using namespace std;

class Complex
{
    int real,imaginary;

    public:
        void getData(void)
        {
            cout << "The Real part is : " << real << endl;
            cout << "The Imaginary part is : " << imaginary << endl;
        }

        void setData(int real1,int imaginary1)
        {
            real = real1;
            imaginary = imaginary1;
        }
};

int main(void)
{
    Complex c1;              // variable of class..
    c1.setData(5,8);
    c1.getData();

    Complex *ptr;              // pointer to class...
    ptr = &c1;
    //(*ptr).setData(11,22);    // we can access member of the class either by (.) Operator or (->) Operator.
    ptr -> setData(11,22);
    (*ptr).getData();

    return 0;   
} 

