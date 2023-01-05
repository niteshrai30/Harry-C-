#include<iostream>

using namespace std;

class employee
{
    private :
    int id;
    static int count;

    public :
    void setdata(void)
    {
        cout << "Enter Id number " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The Id of the employee is "<< id << " and Employee number is "<< count << endl;
    }

};
//count is the static data member of the class employee..

int employee :: count;   //default value is zero..

int main(void)
{
    employee ram,shyam,shagun;

    // ram.id = 1;     //this will give error because it is a private member..
    // ram.count = 1;  //this will give error because it is a private member..

    ram.setdata();
    ram.getdata();

    shyam.setdata();
    shyam.getdata();

    shagun.setdata();
    shagun.getdata();

    return 0;
}