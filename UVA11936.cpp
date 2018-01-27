#include<iostream>

using namespace std;

int main()
{
    short int N,i;
    int a,b,c;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        cin>>a>>b>>c;

        if(a>0 && b>0 && c>0 && (a+b)>c && (b+c)>a && (a+c)>b)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Wrong!!"<<endl;
        }
    }
    return 0;
}
