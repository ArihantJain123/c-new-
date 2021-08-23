#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main()
{
    system("cls");
    int S,P,a,b,c;

    cout<<"enter sum of two number :";
    cin>>S;
    cout<<"enter product of two number : ";
    cin>>P;
    if(S>0)

        cout<<"Quadratic eqn is : x*x -"<<S<<"+"<<P<<endl;
    else
        cout<<"Quadratic eqn is : x*x +"<<S<<"+"<<P<<endl;

        a= 1;
        b= -S;
        c=P;
        cout<<"coefficient of a is "<<a<<" b is"<<b<<"c is"<<c<<endl;
        double discriminant = b*b-4*a*c;
        double sqroot  = sqrt(discriminant);
        double root1 = (-b+sqroot)/(2*a);
        double root2 = (-b-sqroot)/(2*a);
        cout<<"Two number sum is "<<S<<"product is"<<P;
        cout<<"1 number :"<<root1<<"2 number :" <<root2<<endl;
        return 0;

}

