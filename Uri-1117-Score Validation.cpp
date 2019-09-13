#include<stdio.h>
int main()
{

    int i,j=0;
    float arr[3],avg,n;

    while(1)
    {
        scanf("%f",&n);
        if(n>=0 && n<=10){
            arr[j] = n;
        j++;
        }
        else
            printf("noto invalida\n");
        if(j>1)
            break;
    }
    avg = (arr[0]+arr[1])/ 2.0;
    printf("media = %0.2f\n",avg);
    return 0;
}
