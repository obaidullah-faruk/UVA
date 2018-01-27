#include<bits/stdc++.h>

using namespace std;

void func(int n,int i)
{
    if(n==1)
    {
        cout<<"Case "<<i<<": "<<0<<endl;
        return;
    }
    bool chk=true;
    int k=1,count=0;
    while(chk)
    {
        k=k*2;
        count++;
        if(k>=n)
        {
            cout<<"Case "<<i<<": "<<count<<endl;
            break;
        }
    }
}

int main()
{
    int t,n,i=0;
    while(cin>>n)
    {
        i++;
        if(n<0)
        {
            exit(0);
        }
        func(n,i);
    }
    return 0;
}
