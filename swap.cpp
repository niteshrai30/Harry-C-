#include<iostream>

using namespace std;

int main(void)
{
	int x,y;
	cout << "enter two number "<<"\n";
	cin >> x >> y;
	cout << "number before swapping is "<<" a = " <<x <<" ,b =" << y << endl;
	
	x = x + y;
	y = x - y;
	x = x - y;

	cout << "number after swapping is "<< " a = "<< x << ", b = "<< y <<"\n";

	return 0;

}
