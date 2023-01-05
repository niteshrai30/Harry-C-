
#include<iostream>
#include<iomanip>   //This Library is used for finding Operator precedence.. 

using namespace std;

int main(void)
{
    // ************** Literals *******************//
    cout << "size of 34.4 is " << sizeof(34.4) << endl;
    cout << "size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "size of 34.4F is " << sizeof(34.4F) << endl; 


    // ************Reference***********************//
    float x = 455;
    float & y = x;

    cout << "value of x is : " << x <<endl;
    cout << "value of & y is : " << y << endl;

    //***************** Manipulators in C++, setw() *******************************//
    // each variable will take fixed number of width or fixed number of digit.
    // e.g.-> 0001,0022,0333,4444. 

    int p = 5,q = 56, r = 1234;
    cout << "The value of p without setw() is : " << p << endl;
    cout << "The value of q without setw() is : " << q << endl;
    cout << "The value of r without setw() is : " << r << endl;
    cout << "The value of p with setw() is : " << setw(4) << p << endl;
    cout << "The value of q with setw() is : " << setw(4) << q << endl;
    cout << "The value of r with setw() is : " << setw(4) << r << endl;

    return 0;
}