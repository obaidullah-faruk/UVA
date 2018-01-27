#include<bits/stdc++.h>

using namespace std;

int list_j[10];

void assend()
{
    int count=0;
   for(int i=0;i<9;i++)
   {
       if(list_j[i]<list_j[i+1])
       {
           count++;
       }
   }
   if(count==9)
   {
       cout<<"Ordered"<<endl;
   }
   else
   {
       cout<<"Unordered"<<endl;
   }
}

void desend()
{
   int count=0;
   for(int i=0;i<9;i++)
   {
       if(list_j[i]>list_j[i+1])
       {
           count++;
       }
   }
   if(count==9)
   {
       cout<<"Ordered"<<endl;
   }
   else
   {
       cout<<"Unordered"<<endl;
   }
   return;
}

void chk()
{
    int c,d;
    c=list_j[1]-list_j[0];
    if(c>0)
    {
        assend();
        return;
    }
    else
    {
        desend();
        return;
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>list_j[j];
        }
        chk();
    }
    return 0;
}
