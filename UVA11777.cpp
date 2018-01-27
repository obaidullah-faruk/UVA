#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    unsigned short int T,i,j,Sum;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        int Sum=0;
        int num[7];
        for(j=0; j<7; j++)
        {
            cin>>num[j];
        }
        for(j=4; j<6; j++)
        {
            if(num[j]<num[j+1])
            {
                swap(num[j],num[j+1]);
            }
        }
        for(j=4; j<6; j++)
        {
            Sum+=num[j];
        }
        Sum=Sum/2;
        for(j=0; j<4; j++)
        {
            Sum+=num[j];
        }
        if(Sum>=90)
        {
            cout<<"Case "<<i<<": A"<<endl;
        }
        else if(Sum>=80 && Sum<90)
        {
            cout<<"Case "<<i<<": B"<<endl;
        }
        else if(Sum>=70 && Sum<80)
        {
            cout<<"Case "<<i<<": C"<<endl;
        }
        else if(Sum>=60 && Sum<70)
        {
            cout<<"Case "<<i<<": D"<<endl;
        }
        else if(Sum<60)
        {
            cout<<"Case "<<i<<": F"<<endl;
        }
    }
    return 0;
}
