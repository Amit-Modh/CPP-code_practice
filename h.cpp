#include<iostream>
using namespace std;

int Binarysearch(int s,int e, int n)
{
    int ans, square, mid = s + ( (e-s) / 2 );
    int i = 0;
    while(mid*mid != square)
    {
        
        square = mid*mid;
        if(square==n)
        {
            ans=mid;
            //return ans;
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
        mid = s + ( (e-s) / 2 ) ;
        i++;
    }
    //cout<<i;
    return i;

}

int main()
{
    int element;
    //int arr[element]; cant use array here.
    int start=1;
    int end=element;
    cout<<"find the squareroot of: ";
    cin>>element;
    cout<<"squareroot be:"<<Binarysearch(start,end,element);
}

