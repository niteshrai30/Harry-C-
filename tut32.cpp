#include<iostream>
using namespace std;

class Simple
{
    int data1,data2,data3;
    public:
    Simple(int a ,int b = 6,int c = 7) //here,b and c have default value..
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void Simple :: printData()
{
    cout << "The value of the data1 ,data2 and data3 is "<< data1 <<","<< data2<<" and " << data3 << endl;
}

int main(void)
{
    Simple a(10);
    a.printData();

    Simple b(10,20);
    b.printData();

    Simple c(10,20,30);
    c.printData();

    return 0;
}