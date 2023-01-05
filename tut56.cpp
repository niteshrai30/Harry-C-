#include<iostream>
using namespace std;

/* 
Virtual function .. it is very important to mention virtual against any function..
if we want to to point same obj that we have assigned to different class pointerr..

here,if we have any pointer of base class and we assigned reference of object
of derived class.then still this pointer will point to base class..not to 
derived class..So,to avoid this situation we can use virtual keyword against the 
function.then,base class pointer will start pointing towards derived class..
 */
class BaseClass
{
    public:
        int var_base = 1;
        virtual void display(void)   //****//
        //void display(void)
        {
            cout << " 1 Displaying Base class variable var_base "<< var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived = 2;
        void display(void)
        {
            cout << "2 Displaying Base class variable var_base "<< var_base<< endl;
            cout << "2 Displaying Derived class variable var_derived "<< var_derived<< endl;
        }
};


int main(void)
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();


    return 0;
}