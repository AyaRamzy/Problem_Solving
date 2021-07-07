#include <iostream>

using namespace std;

int main()
{
    int x,y,q;
    char s ,c;
    cin>>x>>s>>y>>c>>q;
    switch(s)
    {
      case '+':
        if((x+y) == q)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x+y;
        }
        break;
      case '-':
        if((x-y) == q)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x-y;
        }
        break;
      case '*':
        if((x*y) == q)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x*y;
        }
        break;
        default : break;

    }


}
