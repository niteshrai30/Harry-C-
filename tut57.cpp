#include <iostream>
//#include <cstream>
using namespace std;

class Base
{
protected:
    string title;
    float rating;

public:
    Base(string s, float r)
    {
        title = s;
        rating = r;
    }
   // virtual void display()
   void display()
    {
        cout << "Bogus Code"<< endl;
    }
};

class BaseVideo : public Base
{
    float videolength;

public:
    BaseVideo(string s, float r, float v1) : Base(s, r)
    {
        videolength = v1;
    }
    void display(void)
    {
        cout << "This is an amaging video with title " << title << endl;
        cout << "This is an amaging video with rating " << rating << " Out of 5." << endl;
        cout << "This is an amaging video with videolength " << videolength << endl;
    }
};

class BaseText : public Base
{
    float wordcount;

public:
    BaseText(string s, float r, int wc) : Base(s, r)
    {
        wordcount = wc;
    }
    void display(void)
    {
        cout << "This is an amaging Text tutorial with title " << title << endl;
        cout << "Rating of This amaging Text is = " << rating << " Out of 5." << endl;
        cout << "Number of words in this Text is = " << wordcount << " words " << endl;
    }
};

int main(void)
{
    string title;
    float rating, vlen;
    int words;

    title = "Happy New Year video";
    rating = 4.2;
    vlen = 1.5;

    BaseVideo base_video1(title, rating, vlen);
    base_video1.display();
 
    title = "Happy New Year Text";
    rating = 4.4;
    words = 300;

    BaseText base_text1(title, rating, words);
    base_text1.display();

    Base* array[2];
    array[0] = &base_video1;
    array[1] = &base_text1;

    array[0]->display();
    array[1]->display();


 
        return 0;
}

/* 
Rules for virtual functions:->

1.They cannot be static

2.They are accessed by object pointers

3.Virtual functions can be a friend of another class

4.A virtual function in the base class might not be used.

5.If a virtual function is defined in a base class, 
  there is no necessity of redefining it in the derived class 
*/
