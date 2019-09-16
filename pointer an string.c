#include<stdio.h>
int main(void)
{

    char a[] ="Herry potter";

    printf("%c\n",*a);
    printf("%c\n",*(a+1));
    printf("%c\n",*(a+6));

    char *namePtr;
    namePtr = a;

    printf("%c",*namePtr);
    printf("%c",*(namePtr+1));
    printf("%c",*(namePtr+6));

}
