#include <iostream>
using namespace std;

int linearsearch(int x, int a[])
{
    int target, j;
    cout << "insert element to get searched/find:";
    cin >> target;
    int flag = 0;
    for (j = 0; j < x; j++)
    {
        if (a[j] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "element found at indexno." << a[j] << endl;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}

int main()
{
    int n;
    cout << "no. of elements in array be:";
    cin >> n;

    int arr[n];

    cout << "array input be:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array looks like:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    linearsearch(n, arr);
}