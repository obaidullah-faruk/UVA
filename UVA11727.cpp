#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
        if((a>b&&c<b)||(c>b&&a<b))
        {
            d=b;
            cout<<"Case "<<i<<": "<<d<<endl;
        }
        else if((b>a&&c<a)||(c>a&&b<a))
        {
            d=a;
            cout<<"Case "<<i<<": "<<d<<endl;
        }
        else
        {
            d=c;
            cout<<"Case "<<i<<": "<<d<<endl;
        }

    }
    return 0;
}
