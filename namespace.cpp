// A C++ code to demonstrate that we can define
// methods outside namespace.

#include<iostream>
using namespace std;

 namespace ns
 {
    void display();

    class fun
    {
        public:
        void display();        
    };
 }

 void ns :: fun :: display()
 {
    cout << "ns :: fun :: display \n ";
 }

 void ns :: display()
 {
    cout << "ns :: display() \n";

 }

 int main()
 {
    ns :: fun  obj;
    obj. display();
    ns :: display();
    return 0;
 }