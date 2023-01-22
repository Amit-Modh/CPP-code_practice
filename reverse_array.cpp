#include<iostream>
using namespace std;

void odd_reverse(int odd_a[], int size)
{
    int start=0,end=size-1;
    int i,j;
    for(i=0;i<size/2;i++)
    {
        cout<<"after iteration:"<<start<<" "<<end<<endl;
        if(start<end)
        {  
            int temp;
            temp=odd_a[start];
            odd_a[start]=odd_a[end];
            odd_a[end]=temp;
        }
        
        if(start==end)
        {
            continue;
        }

        start++;
        end--;
        //As we had done size/2, we know if 5elements then need to do swaps.
        //so it gets stops itself after 5/2=2.5=int(2.5)=2times. 
        //hence no need to check for below if condition. 
        /*if(start>end)
        {
            cout<<"stop,array got reversed"<<endl;
        }*/

          
    }  
}

void even_reverse(int even_a[], int size)
{
    int start=0,end=size-1;
    int i,j;
    for(i=0;i<size/2;i++)
    {
        cout<<"after iteration:"<<start<<" "<<end<<endl;
        if(start<end)
        {  
            int temp;
            temp=even_a[start];
            even_a[start]=even_a[end];
            even_a[end]=temp;
        }

        else
        {
            cout<<"stop,array got reversed"<<endl;
        }

        start++;
        end--;  
          
    }  
}


void printarray(int a[],int size)
{
    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<" ";
    }
    
}

int main()
{
    int odd_arr[]={2,-6,9,4,-1};
    cout<<"lets do,odd array Reverse:"<<endl;
    odd_reverse(odd_arr,5);
    cout<<"Reversed array be:"<<endl;
    printarray(odd_arr,5);
    cout<<endl;
    cout<<endl;

    int even_arr[]={1,2,3,4,5,6};
    cout<<"lets do,even array Reverse:"<<endl;
    even_reverse(even_arr,6);
    cout<<"Reversed array be:"<<endl;
    printarray(even_arr,6);
    cout<<endl;

    return 0;
}