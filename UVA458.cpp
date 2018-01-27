#include<iostream>
#include<string>

using namespace std;

int main()
{
    string Str;
    char C;
    while(cin>>Str)
    {
        int Num;
        for(int i=0;i<Str.size();i++)
        {
            Num=Str[i];
            C=Num-7;
            cout<<C;
        }
        cout<<endl;
    }

    return 0;
}
