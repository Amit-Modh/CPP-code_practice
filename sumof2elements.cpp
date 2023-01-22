#include<iostream>
using namespace std;
// find for the element "target", such that the sum of 2elements of array be result in target value. 


void sumof2elements(int a[],int tar)
{
    int i,j;
    int flag=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]+a[j]==tar)
            {
                flag=1;
                cout<<"elements "<<a[i]<<" and "<<a[j]<<endl;
                break;
            }
            
        }
    }
    if(flag==1)
    {
        cout<<"yes,elements exist having sum = to target";
    }
    else { cout<<"NO,elements not exist having sum = to target";}

}



int main()
{
    int target;
    cout<<"enter target element";
    cin>>target;
    int arr[5];
    cout<<"enter elements in the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sumof2elements(arr,target);
}
