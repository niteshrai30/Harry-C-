#include<iostream>
using namespace std;

template <class T>

class myclass{
        public:
        T data;
        myclass(T x)
        {
            data = x;
        }
        void display();  
};

template <class T>

/********************
declaring display function out of the class using scope resolution(::)
if we donot declare separate template for display function it will 
give error.so,its important to declare template for display
function along with datatype...
********************/

void myclass <T>:: display()     
        {
            cout << data << endl;
        }

void func(int a)
{
    cout <<"I am first func() "<< a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() "<< a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func() "<< a << endl;
}

int main(void)
{
  //  myclass<int>obj(5);
 //   myclass<char>obj('V');
      myclass<float>obj(11.11);

    obj.display();           //either we can use...
    cout << obj.data<< endl;
    func(15);
    /*********************
    function with exact match will be called. 
    *********************/
    func1(25);
    return 0;
}