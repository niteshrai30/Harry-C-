//This is an example of the nested namespace,how to access the same function defined at two different namespaces.

#include<iostream>

using namespace std;

namespace first_space
{
    void fun()
    {
        cout << "Inside first_space \n";
    }

    namespace second_space
    {
        void fun()
        {
            cout << "Inside Second_space \n";
        }
    }
}

//using namespace first_space;
using namespace first_space :: second_space;
int main (void)
{
    fun();
    return 0;
}