#include<iostream>
#include<vector>

using namespace std;

void display(vector <int> &v)
{
    for(int j = 0 ; j < v.size() ; ++j)
    {
        cout << v[j] << " ";
    }
    cout << endl;
}

int main(void)
{
    vector <int> vec1;

    int element,size;
    cout <<"enter the size of the vector "<<endl;
    cin >> size;

    for(int i = 0; i < size; ++i)
    {
        cout << "enter an element to add to this vector " << endl;
        cin >> element;
        vec1.push_back(element);

    }
    display(vec1);
    vec1.pop_back();          // it will remove one element from end;

    display(vec1);
    vec1.pop_back();

    display(vec1);

    vector <int> :: iterator iter;          // it is an iterator--> insert(iterator,element to add);
    iter = vec1.begin();                   // begin function points iterator to starting of the vector..

    vec1.insert(iter,500);         // 500 will be added in starting once..
    display(vec1);

    vec1.insert(iter,3,400);      // it will add 400 three times..

    display(vec1);
    
    return 0;
    
}
