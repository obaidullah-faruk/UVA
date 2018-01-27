#include<iostream>

using namespace std;

int main()
{
    short int T,i,j,Max,N;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>N;
        int Scary[N];
        for(j=0;j<N;j++)
        {
            cin>>Scary[j];
        }
        Max=Scary[0];
        for(j=1;j<N;j++)
        {
            if(Max<Scary[j])
            {
                Max=Scary[j];
            }
        }
        cout<<"Case "<<i<<": "<<Max<<endl;

    }

    return 0;
}
