#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=0,j;
    int n,q;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
        {
            exit(0);
        }
        i+=1;
        int m_list[n+1];
        int q_list[q];
        m_list[0]=n;
        // taking input
        for(int j=1;j<=n;j++)
        {
            cin>>m_list[j];
        }
        // Sorting

        sort(m_list+1,m_list+(n+1));
        // Sort checking

        // taking input
        for(int k=0;k<q;k++)
        {
            cin>>q_list[k];
        }
        cout<<"CASE# "<<i<<":"<<endl;
        // Searching
        for(int k=0;k<q;k++)
        {
            bool count=false;
            for(int j=1;j<=n;j++)
            {
                if(q_list[k]==m_list[j])
                {
                    if(count==true)
                    {
                        continue;
                    }
                    else
                    {
                    cout<<q_list[k]<<" found at "<<j<<endl;
                    count=true;
                    }
                }
            }
            if(count==false)
            {
                cout<<q_list[k]<<" not found"<<endl;
            }
        }
    }
    return 0;
}
