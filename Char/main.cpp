#include <iostream>

using namespace std;

int main()
{
   char x;
   cin>>x;

   if(x>=97)
   {
       x-=32;
       cout<<x;
   }
   else
   {
       x+=32;
       cout<<x;
   }

}
