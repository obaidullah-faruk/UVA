#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    short int T,i;
    double C,d,F;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>C>>d;
        F=((C*9)/5)+32;
        F=F+d;
        C=((F-32)*5)/9;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<C<<endl;
    }
    return 0;
}
