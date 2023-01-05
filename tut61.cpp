#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
    string name ,content;
    ofstream fout("sample60.txt");         //Writing into a file..
    cout << "Enter your name";
    cin >> name;
    fout << name;
    fout.close();

    ifstream fin("sample60.txt");            // fin is just like Pipe Connecting file..here,it is used as reading.
    fin >> content;
    cout << "The content of the file is "<<content;
    fin.close();

    return 0;
}
