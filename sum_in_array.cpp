#include<iostream>
using namespace std;

int sum(int a[],int n)
{
    int i=0;
    for(int j=i+1;j<n;j++)
    {
        a[i]=a[i]+a[j];
    }
    
    return a[i];
    
}


int main()
{
    int arr[]={3,-4,6,-3,-2,9};
    cout<<"the sum of elements in this aray be:";
    cout<<sum(arr,6)<<endl;
}