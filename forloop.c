#include<stdio.h>

int main()

{
 int count, p,n;
 float si,r;
 for(count = 1; count<=3; count++)
 {
     printf("enter the value of p,n,r");
     scanf("%d%d%f",&p,&n,&r);
     si = p*n*r/100;
     printf("simple interest = %f",si);


 }
 return 0;

}
