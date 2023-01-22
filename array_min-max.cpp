#include <iostream>
#include <climits>
using namespace std;

int getmin(int a[], int s)
{
    int j;
    int min = INT_MAX;
    for(j=0; j<s; j++)
    {
        if (a[j] < min)
        {
            min = a[j];
        }

    }
    
    return min;
}

int getmax(int a[], int s)
{
    int k;
    int max = INT_MIN;
    for(k=0; k<s; k++)
    {
        if (a[k] > max)
        {
            max = a[k];
        }

    }
    
    return max;
}

int main()
{
    int size, i;
    cout << "enter the size of array:" << endl;
    cin >> size;

    int arr[size];

    cout << "enter elements of array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "minimum be:" << getmin(arr, size) << endl;
    cout << "maximum be:" << getmax(arr, size) << endl;

    return 0;
}