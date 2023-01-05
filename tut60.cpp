#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
    string st1,st2;
    
    st1 ="This is new C++ File Tutorial";

    ofstream out("sample60.txt");        // opening the file (getting file as output)
     out << st1;                           // writing in to the file.

    ifstream in("sample60b.txt");        //entering file means file is input
    
    //in >> st2;                       // it will not give proper output like string after space or next
    getline(in ,st2);                 // line will not be considered by it.so,we have to use getline fun.

    // we can use any variable instead of in or out..
    
    // ifstream read("sample60b.txt");
    // //read >> st2;

    // getline(read ,st2);
    
    cout<<st2;                      // reading the file..

    return 0;
}
