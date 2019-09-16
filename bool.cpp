#include<stdio.h>
struct book{
   char name[20];
   int price;
   int page;

};

int main()
{
    typedef struct book Book;
    Book b ;
    scanf("%s",b.name);
    scanf("%d",&b.price);
    scanf("%d",&b.page);

    printf("name:%s\n",b.name);
    printf("page:%d\n",b.page);
    printf("price:%d\n",b.price);

    return 0;

}
