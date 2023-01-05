#include <iostream>
#include<string>

using namespace std;

class binary{
      private : 
      string s;
      void chk_bin(void);

      public : 
      void read(void);
      void ones_compliment(void);
      void display(void);     
};

void binary :: read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;

}

void binary :: chk_bin(void)
{
    for(int i = 0 ;i < s.length() ;i++)
    {
           if (s.at(i) != '0' && s.at(i)!= '1')
           {
           cout << "Incorrect Binary format" << endl;
           exit(0); 
           }                                      
    }


}

void binary :: ones_compliment(void)
{
    chk_bin();
    for (int i = 0 ; i <  s.length() ; i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }

    }
}

void binary :: display(void)
{
    cout << "displaying your binary number" << endl;
    for (int i=0 ; i<s.length() ;i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}



int main(void)
{
    binary b;
    b.read();
   // b.chk_bin();          // it iis private member so can not be accessed.
    b.display();
    b.ones_compliment();
    cout << "binary number after complimenting is :" << endl;
    b.display();

    return 0;
}