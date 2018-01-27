#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int T,N;
    float Avg;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int count=0;
        float Sum=0.000,Percentage;
        cin>>N;
        int Num[N];
        for(int j=0; j<N; j++)
        {
            cin>>Num[j];
            Sum+=Num[j];
        }
        Avg=(Sum/N);
        for(int j=0; j<N; j++)
        {
            if(Num[j]>Avg)
            {
                count++;
            }
        }
        Percentage=(count*100.000)/N;
        cout<<fixed<<setprecision(3)<<Percentage<<"%"<<endl;
    }
    return 0;
}
