#include<iostream>

using namespace std;

int main()
{
    int T,finish,N,K,P;

    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N >>K >>P;
        {
            finish=K;
            for(int j=1;j<=P;j++)
            {
                if(finish==N)
                {
                    finish=1;
                }
                else
                {
                    finish++;
                }

            }

        }
        cout<<"Case "<<i<<": "<<finish<<endl;
    }

    return 0;
}
