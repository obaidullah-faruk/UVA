#include<iostream>
#include<string>

using namespace std;

bool LeapYear(long long M4,long long M100,long long M400)
{
    if((M4==0 && M100!=0) || M400==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Huluculu(long long M15)
{
    if(M15==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Bulukulu(long long M4,long long M100,long long M400,long long M55)
{
    if(LeapYear(M4,M100,M400)==true)
    {
        if(M55==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    string Y;
    long long int M4,M15,M55,M100,M400,len,i;
    int P=0;
    while(cin>>Y)
    {
        if(P!=0)
        {
            cout<<endl;
        }
        P=1;
        M4=M15=M55=M100=M400=0;
        len=Y.length();
        for(i=0; i<len; i++)
        {
            M4=((M4*10)+(Y[i]-48))%4;
            M15=((M15*10)+(Y[i]-48))%15;
            M55=((M55*10)+(Y[i]-48))%55;
            M100=((M100*10)+(Y[i]-48))%100;
            M400=((M400*10)+(Y[i]-48))%400;
        }
        if(LeapYear(M4,M100,M400)==true)
        {
            cout<<"This is leap year."<<endl;
        }
        if(Huluculu(M15)==true)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        if(Bulukulu(M4,M100,M400,M55)==true)
        {
            cout<<"This is bulukulu festival year."<<endl;
        }

        if(LeapYear(M4,M100,M400)==false && Huluculu(M15)==false && Bulukulu(M4,M100,M400,M55)==false)
        {
            cout<<"This is an ordinary year."<<endl;
        }
    }
    return 0;
}
