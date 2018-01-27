#include<iostream>

using namespace std;

int main()
{
    unsigned short int T,a,b,i,j;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>a>>b;
        int Sum=0;
        for(j=a;j<=b;j++)
        {
            if(j%2==1)
            {
                Sum+=j;
            }
            else
            {
                continue;
            }
        }
        cout<<"Case "<<i<<": "<<Sum<<endl;
    }

    return 0;
}
