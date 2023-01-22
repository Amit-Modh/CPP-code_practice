#include<iostream>
using namespace std;

void selection_sort(int a[],int x)
{
    int i;
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            
            if(a[i]<a[j])
            {
                continue;
            }
            
            if(a[i]>=a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void print_sort(int a[], int x)
{
    int i;
    for(int i=0; i<x;i++)
    {
        cout<<a[i]<<" ";
    
    }
}


int main()
{
    int n=5;
    int arr[]={44,6,30,76,10};

    cout<<"By Applying selection sort"<<endl;
    selection_sort(arr,n);
    
    cout<<"Result of selection sort be : "<<endl;
    print_sort(arr,n);
    cout<<endl;
    return -1;

    
}