#include<iostream>
#include<stdlib.h>

using namespace std;
class A {
           int codeno;
           float price;
           static int count;
        public:
            void getval(int i, float j)
            {
                codeno = i;
                price = j;
                ++count;


            }
            void display(void)
            {
                cout<<"code no: "<<codeno<<"\t";
                cout<<"price: "<<price<<"\n";

            }
            static void dispcount(void)
            {
                cout<<"count = "<<count<<"\n";

            }






};
int A :: count = 0;
int main ()
{
    A ob1,ob2;
    ob1.getval(101,25.12);
    ob2.getval(102,38.19);
    A :: dispcount();
     A ob3;
     ob3.getval(103, 26.15);
     A :: dispcount();
     ob1.display();
     ob2.display();
     ob3.display();
     return 0;


}
