#include <iostream>
using namespace std;

class ShopItem
{
    int Id;
    float price;

public:
    void setData(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The Id of the Object is : " << Id << endl;
        cout << "The Price of the Object is : " << price << endl;
    }
};

int main(void)
{
    int Size = 4;
    ShopItem *ptr = new ShopItem[Size];
    ShopItem *ptrTemp = ptr;

    int p;
    float q;

    for (int i = 0; i < Size; ++i)
    {
        cout << "Enter the Id and Price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < Size; j++)
    {
        cout << "Item number  : " << j+1 << endl;
        ptrTemp->getData();
        cout << endl;
        ptrTemp++;
    }

    return 0;
}