#include<iostream>

using namespace std;

int main()
{
    int t,i;
    long long int a,b;
    cin>>t;
    if(t<15)
    {
        for(i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                cout<<">"<<endl;
            }
            else if(a<b)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }

        }

    }
    return 0;
}
