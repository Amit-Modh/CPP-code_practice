#include<iostream>
using namespace std;

int Binarysearch(int s,int e, int n)
{
    int ans;
    int mid;
    int square;
    for(int i=1;i<=100000;i++)
    {
        mid= s + ( e-s / 2 ) ;
        square= mid*mid;
        if(square==n)
        {
            ans=mid;
            //return ans;
            break;
        }
        else if(square>n)
        {
            e=mid-1;

        }
        else if(square<n)
        {
            ans=mid;
            s=mid+1;

        }
        else
        {
            cout<<"Not working properly"<<endl;
        }
        
    }
    return ans;

}

int main()
{
    int element;
    //int arr[element]; cant use array here.
    int start=0;
    int end=element-1;
    cout<<"find the squareroot of: ";
    cin>>element;
    
    cout<<"squareroot be:"<<Binarysearch(start,end,element);
}

