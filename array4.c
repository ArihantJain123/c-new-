#include<stdio.h>

int main()
{
    int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;
    printf("value of i = %d \n", i);
    printf("value of j = %f \n", j);
    printf("value of i = %c \n", k);

    x = &i;
    y = &j;
    z= &k;

    printf(" address of i = %u\n",x);
    printf(" address of j = %u\n",y);
    printf(" address of k = %u\n",z);

    x++;
    y++;
    z++;

    printf("new address of i = %u\n",x);
    printf("new address of j = %u\n",y);
    printf("new address of k = %u\n",z);

    return 0;



}
