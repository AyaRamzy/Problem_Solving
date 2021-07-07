#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr1[3] ,arr2[3],i;
    for(i=0;i<3;i++)
    {
        cin>>arr1[i];
        arr2[i]= arr1[i];

    }
    sort(arr1,arr1+3);
    for(i=0;i<3;i++)
    {
        cout<<arr1[i]<<endl;

    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<arr2[i]<<endl;

    }








}
