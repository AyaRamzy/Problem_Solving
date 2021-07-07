#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x >= 48 && x <97 && x <65 )
    {
        cout<<"IS DIGIT";
    }
    else if(x >= 97)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
}
