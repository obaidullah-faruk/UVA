#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int T,n,i;
    long m,d,a,m2,d2,s;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>n;
        m=n*567;
        d=m/9;
        a=d+7492;
        m2=a*235;
        d2=m2/47;
        s=abs(d2-498);
        s/=10;
        s=abs(s%10);
        cout<<s<<endl;
    }
    return 0;
}
