#include<stdio.h>

int main()
{
    int value[] = { 2,5,7,9,6};
    int *i,*j;

    i = &value[1];
    j = &value[5];

    printf("sub of pointer = %d %d ",j-i, *j-*i);
     return 0;


}
