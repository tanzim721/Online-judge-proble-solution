#include<stdio.h>
int main()
{

    int i,j,n,max;

    while((scanf("%d%d",&i,&j))!=EOF){
    max = 0;
    printf("%d %d ",i,j);
    while(i<=j){
            int count=1;
        n=i;
        while(n!=1){
            if(n%2==0){
                n = n/2;
            }
            else{
                n = 3*n + 1;
            }
            count++;
        }
        if(count>max){
            max = count;
        }
            i++;
    }
    printf("%d\n",max);
    }
    return 0;
}

