#include<iostream>

using namespace std;

int Bsearch(int[],int,int);
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
    index = Bsearch(arr,N,item);
    if(index==-1)
        cout<<"sorry element not found ";
    else
        cout<<"element found in index :"<<index<<"position:"<<index +1<<endl;
    return 0;
}
    int Bsearch(int arr[],int size, int ITEM)

    {
        int beg,last,mid;
        beg=0; last =  size -1;


    while (beg <=last)
       {

           mid = (beg +last) /2;
           if(ITEM==arr[mid])   return mid;
           else if(ITEM >arr[mid]) beg = mid +1;
           else last = mid -1;



       }
    return -1;



    }







