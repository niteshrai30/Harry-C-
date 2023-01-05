#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int num1,num2;

   cout << "enter the value of num1 \n";    // << is called Insertion operator 
   cin >> num1;                             // >> is called Extraction operator.
   cout << "enter the value of num2 \n";
   cin >> num2;

   cout << "sum of the two number num1 and num2 is :  " << num1 + num2 << "\n" ;

    return 0;
}
