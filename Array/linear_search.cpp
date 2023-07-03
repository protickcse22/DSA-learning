#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int item)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == item)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int arr[ ] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int index  = linearSearch(arr,n,30);
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
