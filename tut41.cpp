#include<iostream>
using namespace std;

class Base1
{
    protected :
    int base1int;
    public :
        void set_base1int(int a)
        {
            base1int = a;
        } 
};
class Base2
{
    protected :
    int base2int;
    public :
        void set_base2int(int a)
    {
            base2int = a;
        } 
};
class Derived :public Base1,public Base2
{
    public :
    void show(void){
        cout << "The value of the base1int is: " << base1int << endl;
        cout << "The value of the base2int is: " << base2int << endl;
        cout << "The value of the sum of the base1int & base2int is: " << (base1int + base2int) << endl;
    }


};

int main(void)
{
    Derived Der;
    Der.set_base1int(10);
    Der.set_base2int(50);
    Der.show();

    return 0;
}