#include<iostream>
#include<fstream>
#include<string.h>             //getline fuction

using namespace std;

int main(void)
{
    ofstream out;
    out.open("sample60.txt");          // Opening the file..
    out << "This is me \n";             // writing into the file..
    out << "Fifa WorldCup ";
    out.close();

    string str1;
    ifstream in;
    in.open("sample60b.txt");  //reading the file..
   // in >> str1;                 // for one word..
   // OR
   // getline(in ,str1) ;         // for one line..
   
   // cout << str1 << endl;
                 
    /********************************************************

    True(1) = when eof (no data in file).
    False(0) = when not eof (still data available).
    
    ********************************************************/                          
    
    while(in.eof() == 0){
        getline(in,str1);
        cout << str1 << endl;
    }

    return 0;
}

/**********************************************************
    ofstream fout("sample60.txt"); 
    
    ofstream fout;
    fout.open("sample60.txt"); 

    fout ->have handle/address of file to write..

************************************************************/
