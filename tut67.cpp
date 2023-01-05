#include<iostream>
using namespace std;

float funcAvg1(int a,int b)
{
    float avg = (a + b)/2.0;    
    return avg;                 
    
    /********************
     * 
    (a + b)/2 =will give int type only.So,to get the float 
    value we have to mention 2.0;
    
    ********************/
}


float funcAvg2(int a,float b)
{
    float avg = (a + b)/2.0;    
    return avg;                 
       
}

template <class T1, class T2 >

float funAverage(T1 a,T2 b)
{
    float z;
    z = (a + b)/2.0;
    return z;
}

template<class T>

void swapp(T &x, T &y)  //swap fun is already in std class...
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}


int main(void)
{
    float avg1;
    avg1 = funcAvg1(5,8);   //giving (int ,int)
    printf("the avg is %.3f of the \n",avg1);

    float avg2;
    avg2 = funcAvg2(5,17.5);   //giving (int ,float)
    printf("the avg is %.3f \n",avg2);

/********************

 here,we are creating two different avg fuction for two different 
 data entry.but with the help of template we can do this only
 creating only one function..In case template it is independent
 of the datatypes.
 
 ********************/
    float avg3;
    avg3 = funAverage(5,8);  //giving (int ,int)
    printf("the avg is %.3f \n",avg3);

    float avg4;
    avg4 = funAverage(5,17.5);  //giving (int , float)
    printf("the avg is %.3f \n",avg4);

/******************
using funcAverage we can calculate averagev of any two numbers
independent of their data types....
*********************/
    int p = 11,q = 22;
    cout << p << endl << q << endl;
    swapp(p,q);
    cout << "value after swap is "<< endl;
    cout << p << endl << q << endl;

    return 0;
}