#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

struct EMPLOYEE

{
int empno;
char name[50];
float basic;
float experience;




};
void display(EMPLOYEE *emp);
void increase(EMPLOYEE *emp);
int main()
 {
     EMPLOYEE mrg, *eptr;
     cout<<"enter the emp no :";
     cin>>mrg.empno;
     cout<<"enter name :";
     gets(mrg.name);
     cout<<"enter basic pay :";
     cin>>mrg.basic;
     cout<<"enter experiences :";
     cin>>mrg.experience;
     eptr = &mrg;
     cout<<"\n Employee details before inc \n";
     display(eptr);
     increase(eptr);
     cout<<"\nEmployee details after  inc \n";
     display(eptr);
     return 0;
 }
void display(EMPLOYEE *emp)
{
    int len = strlen(emp->name);
    cout<<"emp no :"<<emp->empno;
    cout<<"\n name :";
    cout.write(emp->name,len);
    cout<<"\t basic :"<<emp->basic;
    cout<<"t experience :"<<emp->experience <<"years\n";


}
void increase(EMPLOYEE *emp)
{
    if(emp->experience>=10)
        emp->basic+=200;




}





