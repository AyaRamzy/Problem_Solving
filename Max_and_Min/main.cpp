#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,mi,mx;
    cin>>a>>b>>c;

    if(min(a,b)<= c)
    {
        cout<<min(a,b)<<" ";
    }
    else
    {
        cout<<c<<" ";
    }
    if(max(a,b)>=c)
    {
        cout<<max(a,b);
    }
    else
    {
        cout<<c;
    }

}
