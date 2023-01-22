#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,1,6,4,2};
    //To Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"array after sorting:"; 
    for(int k=0;k<5;k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}