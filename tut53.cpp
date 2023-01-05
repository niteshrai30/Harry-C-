#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void getData(void)
    {
        cout << "The value of the a is : " << a << endl;
    }
};

int main(void)
{
    A a;
    a.setdata(4).getData();

    return 0;
}