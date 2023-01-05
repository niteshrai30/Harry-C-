#include<iostream>

using namespace std;

int main(void)
{
    int age;
    cout << "Enetr your age \n" << endl;
    cin >> age;

    if ((age < 18) && (age >= 1)) 
    cout << "You are a child \n" << endl;

    else if (age < 1)
    cout << "You are not born yet\n" << endl;

    else if (age >= 18)
    cout << "You are an adult \n" << endl;

    

    return 0;

}