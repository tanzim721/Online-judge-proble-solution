#include<stdio.h>
int main()
{

    int i;
    float sum=0,k=1.0;
    for(i=1;i<=39;i+=2)
    {
        sum = sum + (i/k);
        k = 2*k;
    }
    printf("%0.2f\n",sum);

    return 0;
}
