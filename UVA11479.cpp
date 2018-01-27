#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i;
    long long int a,b,c;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>a>>b>>c;
        if(a>0 && b>0 && c>0 && (a+b)>c && (a+c)>b && (b+c)>a)
        {
            if( a==b && b==c)
            {
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }
            else if(a==b || b==c || a==c)
            {
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": Scalene"<<endl;
            }
        }
        else
        {
            cout<<"Case "<<i<<": Invalid"<<endl;
        }
    }
    return 0;
}
