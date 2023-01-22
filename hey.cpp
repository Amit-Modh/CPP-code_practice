#include<iostream>
using namespace std;

void solve(int j, int *a)
{
    int temp;
    temp=a[0];
    a[0]=a[1];
    a[1]=temp;
    cout<<"output be:"<<a[0]<<" "<<a[1];

}
int main()
{
    int arr[2];
    for(int i=0; i<2; i++)
    {
        cout<<"input be:";
        cin>>arr[i];
    }
    int n=2;
    solve(n,arr);
    return 0;
}

    


