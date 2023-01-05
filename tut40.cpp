#include<iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
    public :
        void set_roll_number(int);
        void get_roll_number(void);    
};

void student ::set_roll_number(int n)
{
    roll_number = n;
}

void student ::get_roll_number(void)
{
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public student
{
    protected :
        float maths;
        float physics;
    public :
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float marks1,float marks2)
{
    maths = marks1;
    physics = marks2;

}

void Exam :: get_marks(void)
{
    cout << "Marks obtained in Maths  are : " << maths << endl;
    cout << "Marks obtained in Physics are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;
    public :
        void display_result()
        {
            get_roll_number();
            get_marks();
            cout << "Your result is : " <<(maths + physics)/2 <<"%"<< endl;
        }
};

int main(void)
{
    Result Nitesh;
    Nitesh.set_roll_number(55);
    Nitesh.set_marks(94.0,96.0);
    Nitesh.display_result();
    return 0;
}