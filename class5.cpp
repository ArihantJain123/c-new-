#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class RESORT {

        int Rno;
        char name[50];
        float charges;
        int days;
        float COMPUTE();
     public :
        void Getinfo();
        void Disinfo();



};
void RESORT :: Getinfo()
{
    cin>>Rno;
    gets(name);
    cin>>charges;
    cin>>days;
}
void RESORT :: Disinfo()
{
    cout<<Rno<<" " <<name<<" " <<charges<<" " <<days<<COMPUTE()<<endl;


}
float RESORT :: COMPUTE()
{
    float amount =  charges* days;
    if(amount >11000)
        amount =  1.02*days*charges;
    return amount ;


}
int main()
{
    system("cls");

    RESORT ob1,ob2;
    ob1.Getinfo();
    ob2.Disinfo();

}

