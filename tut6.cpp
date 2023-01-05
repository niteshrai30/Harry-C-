#include<iostream>

using namespace std;

int main(void)
{
    int a=4, b=5;
    cout << "following are the types of opeartor used in C++ \n";
    cout << " the value of a+b is " << a+b << endl;                   //9
    cout << " the value of a-b is " << a-b << "\n";                   //-1
    cout << " the value of a*b is " << a*b << "\n";                   //20
    cout << " the value of a/b is " << a/b << "\n";                    //0
    cout << " the value of a%b is " << a%b << "\n";                    //4
    cout << " the value of a++ is " << a++ << endl;                    //4 -----> 5
    cout << " the value of a-- is " << a-- << "\n";                    //5 -----> 4
    cout << " the value of ++a is " << ++a << "\n";                    //5
    cout << " the value of --a is " << --a << "\n";                    //4
    
     //comparison operator
     cout << "Following are the comparision opeartor \n";
     cout << "The value of the a == b is " << (a == b) << endl;
     cout << "The value of the a != b is " << (a != b) << endl;
     cout << "The value of the a >= b is " << (a >= b) << endl;
     cout << "The value of the a <= b is " << (a <= b) << endl;
     cout << "The value of the a > b is " << (a > b) << endl;
     cout << "The value of the a < b is " << (a < b) << endl;

     //Following are the logical opeartor
     cout << "Following are the logical opeartor \n";
     cout << "The value of the logic and operator ((a == b) && (a < b ))is " << ((a == b) && (a < b)) << endl;
     cout << "The value of the logic and operator ((a == b) || (a < b)) is " << ((a == b) ||(a < b)) << endl;
    
    return 0;
}