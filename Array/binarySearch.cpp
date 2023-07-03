#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int binarySearch(int arr[], int n, int item)
{
    sort(arr,arr+n);
    printArray(arr,n);
    int startPos = 0;
    int endPos = n -1;
    while(startPos <= endPos)
    {
        int mid = (startPos + endPos) / 2;
        cout<<"Start: "<<startPos<<" End pos: "<<endPos<<" MId: "<<mid<<endl;
        if(arr[mid] == item) return mid;
        else if(item > arr[mid])
        {
            startPos = mid + 1;
        }
        else
        {
            endPos = mid;
        }

    }
    return -1;

}

int main()
{
    int arr[] = {10,80,60,20,70,11,30};
    int n = sizeof(arr) / sizeof(int);
    int item;
    cout<<"Enter the item you search: ";
    cin>>item;
    int index = binarySearch(arr,n,item);
    if(index != -1)
    {
        cout<<"Index of "<<arr[index]<<" is: "<<index<<endl;
    }
    else
    {
        cout<<"Your item is not found"<<endl;
    }

    return 0;
}
