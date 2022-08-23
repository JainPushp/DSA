#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    while(i!=(n-i-1)){
        int temp=0;
        temp = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]= temp;
        i++;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}