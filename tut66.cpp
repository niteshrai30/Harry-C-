#include<iostream>
using namespace std;

template <class T1 = int ,class T2 = char ,class T3 = float>

class myclass{
        public :
        T1 data1;
        T2 data2;
        T3 data3;

        myclass(T1 a, T2 b, T3 c)   //Constructor...
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void display(){
            cout <<"The value of the data1 is "<<data1<<endl;
            cout <<"The value of the data2 is "<<data2<<endl;
            cout <<"The value of the data3 is "<<data3<<endl;
        }


};

int main(void){

    myclass <> m1(5,'A',1.5);  
    
    /******************
    here,I am taking default template...
    *******************/
   
    m1.display();
    cout << endl;

    myclass <float ,int ,char > m2(1.5 ,10 ,'Z');
     
     /*****************
      here,we are  considering customize template..
      ****************/

    m2.display();
    cout << endl;

    return 0;
}