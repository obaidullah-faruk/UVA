#include<bits/stdc++.h>

using namespace std;

bool primeChk(unsigned long long n)
{
    unsigned long long i,count=0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        return true;

    else
        return false;
}

unsigned long long rev(unsigned long long n)
{
    unsigned long long revN=0,c;

    while(n!=0)
    {
        c=n%10;
        revN=revN*10+c;
        n/=10;
    }
    return revN;
}

int main()
{
    unsigned long int n,revN;
    bool p,e;
    while(cin>>n)
    {
        p=false;
        e=false;
        p=primeChk(n);
        if(p==true)
        {
            revN=rev(n);
            if(revN==n)
            {
                cout<<n<<" is prime."<<endl;
            }
            else
            {
                e=primeChk(revN);
                if(e==true)
                {
                    cout<<n<<" is emirp."<<endl;
                }
                else
                {
                    cout<<n<<" is prime."<<endl;
                }
            }
        }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
    }

    return 0;
}
