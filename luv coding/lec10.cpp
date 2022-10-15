#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cout<<"Enter n"<<endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }


    printarr(arr,n);
    return 0;
}