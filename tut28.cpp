#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X ,Y );

    public:
        void setValue(int value)
        {
            data = value;
        }
};

class Y
{
    int num;

    friend void add(X ,Y );
    
    public:
        void setValue(int value)
        {
            num = value;
        }
};

void add(X o1,Y o2 )
{
    cout << "sum of the data of the object X and Y is "<< (o1.data + o2.num) << endl;
}

int main (void)
{
    X a1;
    Y b1;

    a1.setValue(5);
    b1.setValue(10);

    add(a1,b1);
    
    return 0;
}