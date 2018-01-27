#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    short int K,i;
    long int N,M,X,Y;
    while(1)
    {
      cin>>K;
      if(K==0)
     {
        exit(0);
     }
     else
     {
        cin>>N>>M;
        for(i=1;i<=K;i++)
        {
            cin>>X>>Y;
            if(X>N && Y>M)
            {
                cout<<"NE"<<endl;
            }
            else if(X<N && Y>M)
            {
                cout<<"NO"<<endl;
            }
            else if(X<N && Y<M)
            {
                cout<<"SO"<<endl;
            }
            else if(X>N && Y<M)
            {
                cout<<"SE"<<endl;
            }
            else if(X==N || Y==M)
            {
                cout<<"divisa"<<endl;
            }

        }

     }

   }

    return 0;
}
