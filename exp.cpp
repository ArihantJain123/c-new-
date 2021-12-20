#include<iostream>
using namespace std;
int main() {
   float a, b, c, d, x,y,z ;
   float ans =0;
   cout<<"The form of the equation is: (((a-b)*(c-d))/(1.2+(4-c)))-((x*x)/(y+z))  "<<endl; //Mathematical expression given in Ques

   cout<<"Enter the values of a, b, c, d , x, y , z : "<<endl; //enter value
   cin>>a>>b>>c>>d>>x>>y>>z; // input value

   float s1=0;
   float s2=0;
   float s3=0;
   float s4=0;

    s1= (a-b)*(c-d); //sub part
    s2= (1.2 + (4-c)); // sub part
    s3 = x*x;  //sub part
    s4= y+z;  //sub part

    ans = (s1/s2) - (s3/s4); // solution of the expression
    cout<<"value of the expression: " <<ans<<endl; // output
    return 0;


}
