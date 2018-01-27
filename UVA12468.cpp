#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ans;

    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
        {
            exit(0);
        }
        if(a==b)
            cout<<0<<endl;
        else
        {
            if(a>b) swap(a,b);
            ans=min(b-a,a+100-b);
            cout<<ans<<endl;
        }
    }
    return 0;
}
