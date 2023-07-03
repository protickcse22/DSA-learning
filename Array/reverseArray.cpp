#include<bits/stdc++.h>
using namespace std;
void printReverseArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}
int main()
{

    int arr[] = {10,80,60,20,70,11,30};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Before reverse"<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printReverseArray(arr,n);
    cout<<"After reverse"<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
