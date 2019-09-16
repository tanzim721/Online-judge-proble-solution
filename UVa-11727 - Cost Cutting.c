#include<stdio.h>
int main()
{

    int a,b,c,T,i,ans;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a>=b && a<=c )||(a<=b && a>=c)){
            ans = a;
        }
        else if((b>=a && b<=c)||(b<=a && b>=c)){
            ans = b;
        }
        if((c>=a && c<=b)||(a>=c && b<=c)){
            ans = c;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
