#include<iostream>
using namespace std;


void Binarysearch(int a[], int x, int tar)
{
    int low=0,high=x-1;
    int flag=0;
    int mid;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(tar==a[mid])
        {
            flag=1;
            break;
        }   
        else if(tar<a[mid])
        {
                
            high=mid-1;
        }
        else if(tar>a[mid])
        {   
            low=mid+1;
        }
    }
    if(flag==1) {cout<<"element found and flag be:"<<flag;}
    else {cout<<"element not found AND FLAG BE:"<<flag;} 
}

int main()
{
    int n,i;
    int arr[n];
    cout<<"no. of elements in array be:";
    cin>>n;
    cout<<"enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array looks like:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    

    int target;
    cout<<"element to be searched:";
    cin>>target;

    Binarysearch(arr,n,target);
}