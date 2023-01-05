#include<iostream>

using namespace std;

inline void add(int x,int y = 0,int z = 0);

int main(void)
{
	int a,b,c;

	cin >> a >> b;
	add(a,b);

	cout << "enter three numbers\n";
	cin >> a >> b >> c;
	add(a,b,c);

return 0;
}

void add(int x,int y,int z)
{
	cout << "sum of the numbers are  " << x+y+z << "\n";


}
