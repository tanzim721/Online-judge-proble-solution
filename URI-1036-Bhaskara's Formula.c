#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,d,R1,R2;
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b - (4*a*c));
    if(a==0){
        printf("Impossivel calcular\n");
    }
    else if(d<0){
        printf("Impossivel calcular\n");
    }
    else{
        R1 = (-b+sqrt(d))/(a+a);
        R2 = (-b-sqrt(d))/(a+a);
         printf("R1 = %0.5f\n",R1);
         printf("R2 = %0.5f\n",R2);
    }
    return 0;

}
