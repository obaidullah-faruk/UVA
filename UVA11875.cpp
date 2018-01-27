#include<iostream>

using namespace std;

int main()
{
    int T,P[10],N;

    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        int count=0;
         for(int j=0;j<N;j++)
         {
             cin>>P[j];
             count++;

         }
         int L=count/2;

         cout<<"Case "<<i<<": "<<P[L]<<endl;

    }

    return 0;
}
