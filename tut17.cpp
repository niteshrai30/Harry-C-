#include<iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;
}

int main(void)
{
    int a,b;
    cout << "Enter two numbers\n" << endl;
    cin >> a >> b;
    cout << "Sum of the two numbers is \n" << sum(a,b) << endl;
    return 0;
}