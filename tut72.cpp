#include<iostream>
#include<list>

using namespace std;

void display(list <int> &list3)
{
    list<int> :: iterator iter3;
    for(iter3 = list3.begin(); iter3 != list3.end(); iter3++)
    {
        cout << *iter3 << " ";
    }
    cout << endl;
}

int main(void)
{
    list <int> list1;     // list of Zero length.
    list1.push_back(5);
    list1.push_back(10);
    list1.push_back(15);
    list1.push_back(20);
    list1.push_back(25);

    list <int> :: iterator  iter;
    iter = list1.begin();           // starting address of the list is stored into iter...

   /***** Display

    cout << *iter << " ";
    iter++;
    
    cout << *iter << " ";
    iter++;
    
    cout << *iter << " ";
    iter++;

    cout << *iter << " ";
    iter++;

    cout << *iter << " ";
    
    cout << endl;
                         ****/
    display(list1);

    list <int> list2(5);  //Empty list of length 5.
    list<int> :: iterator iter1;                    

    iter1 = list2.begin();

    *iter1 = 100;
    iter1++;
    *iter1 = 200;
    iter1++;
    *iter1 = 300;
    iter1++;
    *iter1 = 400;
    iter1++;
    *iter1 = 500;

    display(list2);

    return 0;
}
