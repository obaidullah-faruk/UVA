#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    long long int N,no_of_cut;

    while(1)
    {
        cin>>N;
        if(N<0)
        {
            exit(0);
        }
        else
        {
          no_of_cut=(((N*N)+ N + 2)/2);
          cout<<no_of_cut<<endl;
        }
    }
    return 0;
}
