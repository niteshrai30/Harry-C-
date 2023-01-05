//Finding Distance between two points...

#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int a,b;
    public :
    friend void Distance(Point x,Point y);
    Point(int ,int); //Constructor Declaration..
                             //  This is a parameterised 
                       //constructor as it takes two parameter..


        void printNumber()
        {
            cout <<"Your Number is "<< a << "x & " << b <<"y" << endl;
        }
            
};

void Distance(Point x,Point y)
{
    double d = sqrt((y.b -x.b)*(y.b -x.b) + (y.a - x.a)*(y.a - x.a));
    cout << "Distance between two point is "<< d << endl;
}


Point :: Point(int x,int y) 
{
    a = x;
    b = y;
}

int main(void)
{
    Point a(3,2);         // declaring an Object..
    a.printNumber();
    
    Point b = Point(7,8);   //Another way of declaring another Object..
    b.printNumber();

    Distance(a,b);

    return 0;
}