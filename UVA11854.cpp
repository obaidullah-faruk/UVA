#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a,b,c;
    unsigned long long x,y,z;

    while(cin>>a>>b>>c)
    {
        if(a==0 & b==0 & c==0)
        {
            exit(0);
        }
        else
        {

            if(a>c)
                swap(a,c);
            if(b>c)
                swap(b,c);
            x=(a*a);
            y=(b*b);
            z=(c*c);
            if((x+y)==z)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }

    return 0;
}
