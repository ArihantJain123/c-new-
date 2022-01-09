#include<iostream>
#include<stdlib.h>
// class is created 
using namespace std;
int a = 10;

int main()
{
   system("cls");


  int a = 15;
cout<<" Main() " <<"\n";
cout<<" a = "<<a<<"\n";
cout<<"::a = "<<::a<<"\n";
{
    int a = 25;
    cout<<"Inner Block\n";
    cout<<"a = "<<a<<"\n";
    cout<<"::a= "<<::a<<"\n";

}
cout<<"Back to main()"<<"\n";
cout<<"a= "<<a<<"\n";
cout<<"::a="<<::a<<"\n";
return 0;


}
