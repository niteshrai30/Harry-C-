#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is : " << roll_no << endl;
    }
};

/*
class Student is base class,
Test & Sports ----(Inherited from)----->Student;
Result  ------(Inherited from)-----> Test & Sports;
*/

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {

        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is : " << endl
             << "Maths = " << maths << ";" << endl
             << "Physics = " << physics << ";" << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float m)
    {
        score = m;
    }

    void print_score(void)
    {
        cout << "Your Sports score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is : " << total << ";" << endl;
    }
};

int main(void)
{
    Result std;
    std.set_number(33);
    std.set_marks(94.5, 97.3);
    std.set_score(85);
    std.Display();

    return 0;
}