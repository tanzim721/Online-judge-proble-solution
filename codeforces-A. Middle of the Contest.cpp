#include<bits/stdc++.h>
using namespace std;
int main()
{

    int h,m,h1,m1,h2,m2,h3,m3,n;
    scanf("%d%*c",&h1);
    scanf("%d",&m1);
    scanf("%d%*c",&h2);
    scanf("%d",&m2);

    h3 = (h1*60) + (h2*60);
    m3 = m1 + m2;
    n=(h3 + m3)/2;

    h = n/60;
    m = n%60;

    printf("%d:%d\n",h,m);
    return 0;

}
