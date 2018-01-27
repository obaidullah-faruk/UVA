#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{

    long long h,o,d;
    while(scanf("%lld %lld",&h, &o)!=EOF)
    {
        if(h>o) swap(o,h);
        d=o-h;
        cout<<d<<endl;
    }

    return 0;
}
