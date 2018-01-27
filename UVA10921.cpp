#include<iostream>
#include<string>

using namespace std;

int main()
{
    string Code;
    int i;
    while(cin>>Code)
    {
        for(i=0; Code[i]!='\0'; i++)
        {
            if((Code[i]=='A')|| (Code[i]=='B') || (Code[i]=='C'))
            {
                Code[i]='2';
            }
            else if((Code[i]=='D')|| (Code[i]=='E') || (Code[i]=='F'))
            {
                Code[i]='3';
            }
            else if((Code[i]=='G')|| (Code[i]=='H') || (Code[i]=='I'))
            {
                Code[i]='4';
            }
            else if((Code[i]=='J')|| (Code[i]=='K') || (Code[i]=='L'))
            {
                Code[i]='5';
            }
            else if((Code[i]=='M')|| (Code[i]=='N') || (Code[i]=='O'))
            {
                Code[i]='6';
            }
            else if((Code[i]=='P')|| (Code[i]=='Q') || (Code[i]=='R') || (Code[i]=='S'))
            {
                Code[i]='7';
            }
            else if((Code[i]=='T')|| (Code[i]=='U') || (Code[i]=='V'))
            {
                Code[i]='8';
            }
            else if((Code[i]=='W')|| (Code[i]=='X') || (Code[i]=='Y') || (Code[i]=='Z'))
            {
                Code[i]='9';
            }
            else if(Code[i]=='1')
            {
                Code[i]='1';
            }
            else if(Code[i]=='0')
            {
                Code[i]='0';
            }
            else if(Code[i]=='-')
            {
                Code[i]='-';
            }
        }
        for(i=0;Code[i]!='\0';i++)
        {
            cout<<Code[i];
        }
        cout<<endl;
    }

    return 0;
}
