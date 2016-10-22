#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int ans;
int x,y;
int gcd(int a,int b)
{
    while (b)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d",&t);
    for (int tt=0;tt<t;tt++)
    {
        ans=1;
        scanf("%d%d",&x,&y);
        if (x<y) swap(x,y);
        bool f=true;

        while (f)
        {
            if (x<y) swap(x,y);
            int now=gcd(x,y);
            int k2=y/now;
            int k1=-1;
            int g=x/now;
            if (g % (k2+1)==0)
            {
                k1=g/(k2+1);
            }
            else f=false;
            if (!f) break;
            x=now*k1;
            y=now*k2;
            ans++;
        }
        printf("Case #%d: %d\n",tt+1,ans);
    }
    return 0;
}
