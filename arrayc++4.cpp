#include<iostream>



using namespace std;

int Lsearch(int[],int,int);
int main()
{
    int arr[50],item,N,index;
    cout<<"how many element in  the array  :";
    cin>>N;
    cout<<"enter array element\n ";
    for(int i = 0; i<N ; i++)
    {cin>>arr[i];}


    char ch = 'y';
    while(ch == 'Y', ch == 'y')
    {


    cout<<"enter element to be deleted ";
    cin >>item;

    if(N==0)
    {
        cout<<"underflow";
        break;
    }
    index = Lsearch(arr,N,item);
    if(index != -1) arr[index] = 0;
    else
        cout<<"sorry no such element in the array .\n";
    cout<<"\n array now is an show below...\n";
    cout<<"Zero signifies deleted element \n";
       for( int i = 0; i<N;  i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"after this emptied space shift\n";
    for(int i = index ; i<N; i++)

    {
        arr[i]=arr[i+1];
    }

    N-=1;
    cout<<"\n want to delete  one more element ?...";
    cin >>ch;

    }
    cout<<"\nthe array now is as shown below ..:";
    for( int i = 0; i<N;  i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}
int Lsearch(int arr[], int size, int ITEM)
{
           for(int i = 0; i <size; i++)
       {
           if(arr[i]==ITEM)   return i;


       }
    return -1;

}
