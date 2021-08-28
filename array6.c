#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,5,6};
    int *i,*j;
    i = &arr[4];
    j = (arr + 4 );
    if( i==j )

        printf ("same location ");
    else
        printf("not same");

        return 0;

}
