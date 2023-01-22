#include<iostream>
using namespace std;

void swap_alternate(int odd_a[],int size)
{
    int i;
    for(i=0;i+1<size;i=i+2)
    {
        int temp;
        temp=odd_a[i];
        odd_a[i]=odd_a[i+1];
        odd_a[i+1]=temp;

    }

    for(int j=0;j<size;j++)
    {
        cout<<odd_a[j]<<" ";
    }
}
void swapp_alternate(int even_a[],int size)
{
    int i;
    for(i=0;i+1<size;i=i+2)
    {
        int temp;
        temp=even_a[i];
        even_a[i]=even_a[i+1];
        even_a[i+1]=temp;

    }

    for(int j=0;j<size;j++)
    {
        cout<<even_a[j]<<" ";
    }
}


int main()
{
    int odd_arr[5]={1,2,3,4,5};
    int even_arr[6]={6,5,4,3,2,1};

    cout<<"After swapping in odd array:"<<endl;
    swap_alternate(odd_arr,5);
    cout<<endl;
    cout<<"After swapping in even array:"<<endl;
    swapp_alternate(even_arr,6);
    cout<<endl;

    return 1;
}