#include<iostream>
using namespace std;


void solve(int a[][3])
{
    cout<<"op be:"<<endl;
    for(int i=0; i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            cout<<a[i][j]<<" ";
        
        }
        cout<<endl;	//print statement
    }
    
}

int main()
{
    //int arr[2][3]={{1,2,3},{5,6,7}};
    int arr[2][3];
    cout<<"inputoo be:";
    for(int i=0; i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        
    }
    solve(arr);

}
