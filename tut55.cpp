// Pointers to derived class..

#include<iostream>
using namespace std;

class Base_class
{
    public:
        int var_base;
        void display(void)
        {
            cout << "Displaying base class variable var_base " << var_base << endl;
        }
};

class Derived_class :public Base_class
{
    public:
        int var_derived;
        void display(void)
        {
            cout << "Displaying derived class variable var_derived " << var_derived << endl;
            cout << "Displaying  base class variable var_base " << var_base << endl;
        }
};

int main(void)
{
    int a;
    Base_class *Base_class_pointer;
    Base_class obj_base;
    Derived_class obj_derived;
    Base_class_pointer = &obj_derived; // Base_class pointer is pointing towards Derived_class;
                                      // here, when we have to access members then it will refer to 
                                     // Base_class not to Derived_class;
    Base_class_pointer->var_base = 55;
    Base_class_pointer->display();

  //  Base_class_pointer-> var_derived = 100; // it will throw Error;
    
    Base_class_pointer->var_base = 200;
    Base_class_pointer->display();

    Derived_class *derived_class_pointer;
    derived_class_pointer = & obj_derived;
    derived_class_pointer->var_derived = 111;
    derived_class_pointer->var_base =500;
    derived_class_pointer->display();


    return 0;
}

/* Derived_claa_pointer will bind with both the class because it is derived from 
base class.while Base_class_pointer will bind with only Base_class.

*/
