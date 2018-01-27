#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int>V;
    list<int>::iterator it;
    stack<int> S;

    int number,N;
    cin>>N;
    for(int k=1; k<=N; k++)
    {
        cin>>number;

        int i=1;

        while(i<=number)
        {
            V.push_front(i);
            i=i*2;
        }

        int sum=0;
        int temp;
        int b1=0,b2=0;
        for(it=V.begin(); it!=V.end(); it++)
        {
            temp=0;
            temp=sum+(*it);
            if(temp<=number)
            {
                sum=sum+(*it);
                b1++;
            }
            else
            {
                continue;
            }
        }
        V.clear();
        int digit;
        int c;
        while(number>9)
        {
            digit=number%10;
            S.push(digit);
            number=number/10;
        }
        S.push(number);

        bool chk=true;
        while(chk)
        {
            if(S.empty()==true)
            {
                chk=false;
            }
            else
            {
                int a=S.top();
                S.pop();

                if(a==0)
                    b2=b2+0;
                else if(a==1)
                    b2=b2+1;
                else if(a==2)
                    b2=b2+1;
                else if(a==3)
                    b2=b2+2;
                else if(a==4)
                    b2=b2+1;
                else if(a==5)
                    b2=b2+2;
                else if(a==6)
                    b2=b2+2;
                else if(a==7)
                    b2=b2+3;
                else if(a==8)
                    b2=b2+1;
                else if(a==9)
                    b2=b2+2;
            }
        }
        cout<<b1<<" "<<b2<<endl;
    }

    return 0;
}
