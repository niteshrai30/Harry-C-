//Basics of the template programming..


#include<iostream>
using namespace std;

template <class T1,class T2>

class myclass{
    public:
        T1 data1; 
        T2 data2;

        myclass(T1 a ,T2 b)           //Constructor...
        {
            data1 = a;
            data2 = b;
        }

        void display(){
            cout << this->data1 << endl <<this->data2 << endl;
        }
}; 

int main(void)
{
    myclass <char ,float > obj('C' , 1.8);
    obj.display();
    return 0;
}

