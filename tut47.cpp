#include <iostream>
#include <cmath>
using namespace std;

class Simple_calculator
{
    int a, b;

public:
    void getDataSimple(void)
    {
        cout << "Enter the value of the a " << endl;
        cin >> a;
        cout << "Enter the value of the b " << endl;
        cin >> b;
    }

    void PerformOperationSimple(void)
    {
        cout << "The value of the a + b is : " << a + b << endl;
        cout << "The value of the a - b is : " << a - b << endl;
        cout << "The value of the a * b is : " << a * b << endl;
        cout << "The value of the a / b is : " << a / b << endl;
    }
};
class Scientific_calculator
{
    int x, y;

public:
    void getDataScientific(void)
    {
        cout << "Enter the value of the a " << endl;
        cin >> x;
        cout << "Enter the value of the b " << endl;
        cin >> y;
    }

    void PerformOperationScientific(void)
    {
        cout << "The value of sin(x) is : " << sin(x) << endl;
        cout << "The value of cos(x) is : " << cos(x) << endl;
        cout << "The value of tan(x) is : " << tan(x) << endl;
        cout << "The value of exp(x) is : " << exp(x) << endl;
    }
};

class Hybrid_Calculator : public Simple_calculator, public Scientific_calculator
{
};

int main(void)
{
    Hybrid_Calculator calc;
    calc.getDataSimple();
    calc.PerformOperationSimple();

    calc.getDataScientific();
    calc.PerformOperationScientific();

    return 0;
}
