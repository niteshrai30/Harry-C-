#include<iostream>
using namespace std;

/*
Syntax for Initialization list in Constructor

Constructor (argument-list) : initialization-section
{
    assignment + other code;
}

*/

class Test
{
    int a;   // a will be initialised first because it is 
    int b;   // declared first.
    
    public :
    // for costructor there should not be any return type..
    
    //    Test(int i,int j) : a(i),b(j)  
    //    Test(int i,int j) : a(i),b(i + j)  // it will work as i is already declared..
    //    Test(int i,int j) : a(i),b(2 * j)
    //    Test(int i,int j) : a(i),b(i + j)
    //   Test(int i,int j) : b(j),a(i + b)     // it will give garbage value as they are not 
                                             // initialised in order.So,Initialisation in 
                                             //same order as declaration is very important.
        Test(int i,int j) : a(i)
        {
            b = j;
            cout << "Constructor executed "<< endl;
            cout << "The value of a is :" << a <<endl;
            cout << "The value of b is :" << b << endl;
        }
};

int main(void)
{
    Test test1(5,8); // always initialise the constructor object
                     // at the time of the declaration.
                     // Test t; t(4,5) ----> Error...**********
    
    return 0;
};