#include<bits/stdc++.h>
using namespace std;

string str1,str2;

bool chk(int l1)
{
    bool match=false;
    for(int i=0; i<l1; i++)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' ||str1[i]=='o' ||str1[i]=='u')
        {
            if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' ||str2[i]=='o' ||str2[i]=='u')
            {
                match=true;
            }
            else
            {
                match=false;
                return match;
            }
        }
        else
        {
            if(str1[i]==str2[i])
            {
                match=true;
            }
            else
            {
                match=false;
                return match;
            }
        }
    }
    return match;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        bool match=false;
        cin>>str1>>str2;
        int l1=str1.length();
        int l2=str2.length();
        if(l1==l2)
        {
            match=chk(l1);
            if(match==true)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;

        str1.clear();
        str2.clear();
    }
    return 0;
}
