#include<stdio.h>
// C++
//New
// 2d array 
// int main function 
// some change  add new changes 

int main()
{
    int array[4][2] = {
                         {12 , 46},
                         {23 , 64},
                         {13 , 45},
                         {19 , 49}

                    };

    int i,j;
    for( i=0; i<=3; i++)
    {
        for(j=0;j<=1;j++)
            printf("%d",*(*( array + i )+ j ));
        printf("\n");


    }
    return 0;





}
