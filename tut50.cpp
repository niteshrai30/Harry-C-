#include <iostream>
using namespace std;

int main(void)
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of variable a is : " << *(ptr) << endl;

    // new keyword..***
    int *p = new int(10);  // dynamicall allocating memory..******
    float *q = new float(20.2020);
    cout << "The value at address P is :" << *(p) << endl;
    cout << "The value at address q is :" << *(q) << endl;

    int *arr = new int[3]; // this Opeeator is used to allocate memory dynamically.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is : " << arr[0] << endl;
    cout << "The value of arr[1] is : " << arr[1] << endl;
    cout << "The value of arr[2] is : " << arr[2] << endl;

    delete[] arr; // this Operator is used to free the dynamically allocated memory..

    return 0;
}