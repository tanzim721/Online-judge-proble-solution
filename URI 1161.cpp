#include<stdio.h>
int main()
{

    long long int m,n,t1,t2;
    int i;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {

        t1=1;
        t2=1;
        for(i=m;i>=1;i--)
        {
            t1 *= m;
            m--;
        }
        for(i=n;i>=1;i--)
        {
            t2 *= n;
            n--;
        }
        printf("%lld\n",t1+t2);
    }

    return 0;
}
