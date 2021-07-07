#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //years
    cout<<n/365<<" years"<<endl;
    //months
    cout<<(n%365)/30<<" months"<<endl;
    //days
    cout<<(n%365)%30<<" days"<<endl;
}
