#include<iostream>

using namespace std;

int Lsearch(int[],int,int);
int main()
{
    int arr[50],item,N,index;
    cout<<"enter the array:";
    cin>>N;
    cout<<"enter array element\n ";
    for(int i = 0; i<N ; i++)
    {cin>>arr[i];}
    cout<<"enter element to be searched ";
    cin >>item;
    index = Lsearch(arr,N,item);
    if(index==-1)
        cout<<"sorry element not found ";
    else
        cout<<"element found in index :"<<index<<"position:"<<index +1<<endl;
    return 0;
}
    int Lsearch(int arr[],int size, int ITEM)

    {

       for(int i = 0; i <size; i++)
       {
           if(arr[i]==ITEM)   return i;


       }
    return -1;



    }







