#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned short int T,i;
    string S;
    cin>>T;
    for(i=0; i<T; i++)
    {
        cin>>S;
        if(S.length()==5)
        {
            cout<<"3"<<endl;
            continue;
        }
        if(S.length()==3)
        {
            int count=0;
            if(S[0]=='t')
            {
                count++;
            }
            if(S[1]=='w')
            {
                count++;
            }
            if(S[2]=='o')
            {
                count++;
            }
            if(count==2 || count==3)
            {
                cout<<"2"<<endl;
                continue;
            }
        }
        if(S.length()==3)
        {
            int count=0;
            if(S[0]=='o')
            {
                count++;
            }
            if(S[1]=='n')
            {
                count++;
            }
            if(S[2]=='e')
            {
                count++;
            }
            if(count==2 || count==3)
            {
                cout<<"1"<<endl;
            }
        }
    }
    return 0;
}
