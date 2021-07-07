#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    a%=100;
	b%=100;
	c%=100;
	d%=100;
    ans=(a*b*c*d)%100;

    if(ans<10)
	{
	cout<<0<<ans;
	}
	else
	{
		cout<<ans;

	}
}
