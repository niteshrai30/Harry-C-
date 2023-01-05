#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(void)
{
    map<string, int> marksMap;
    marksMap["Harry"] = 72;
    marksMap["Jack"]  = 52;
    marksMap["Rohan"] = 42;

    map<string, int> :: iterator iter;

    for(iter = marksMap.begin(); iter != marksMap.end(); ++iter)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    
    return 0;
}
