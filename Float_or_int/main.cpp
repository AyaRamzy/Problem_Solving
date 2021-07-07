#include <iostream>

using namespace std;

int main()
{
    double x,n=0.0;
    int z=0;

    cin>>x;
    z = x;
    n = x-z;
    if(n == 0)
    {
        cout<<"int "<<z;
    }
    else
    {

        cout<<"float "<<z<<" "<<n;
    }
}
