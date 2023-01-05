#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;

    public :
    void indata(int a)
    {
        val1 = a;
    }
    friend void exchange (c1 &,c2  &);
    void display(void)
    {
        cout << val1 << endl;
    }

};

class c2{
    int val2;

    public :
    void indata(int a)
    {
        val2 = a;
    }
    friend void exchange (c1 &,c2 &);

    void display(void)
    {
        cout << val2 << endl;
    }
};
// for swapping we have to use reference.if we donot use then value
// will not be exchanged..

void exchange (c1 & x ,c2 & y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(void)
{
    c1 a;
    c2 b;

    a.indata(10);
    a.display();

    b.indata(20);
    b.display();

    exchange(a , b);

    cout << "Value after exchanging data is " << endl;

    a.display();
    b.display();

    return 0;
}