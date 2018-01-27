#include<bits/stdc++.h>
using namespace std;

int main()
{
   unsigned long long k=0,amount;
   short int t;
   cin>>t;
   string str;
   for(int i=1;i<=t;i++)
   {
       cin>>str;
       if(str=="donate")
       {
          cin>>amount;
          k+=amount;
       }
       else
       {
           cout<<k<<endl;
       }
   }
    return 0;
}
