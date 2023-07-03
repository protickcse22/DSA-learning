#include<bits/stdc++.h>
using namespace std;
int subArrayPerfixSum(int arr[], int n)
{
    int prefSum[n+1];
    int maxSum = 0;
    prefSum[0] = arr[0];
    cout<<"Cummulative sum: "<<prefSum[0]<<endl;
    for(int i=1; i<n; i++)
    {
        prefSum[i] = prefSum[i-1] + arr[i];
        cout<<"Cummulative sum: "<<prefSum[i]<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int subArraySum = i >0 ? prefSum[j] - prefSum[i-1] : prefSum[j];
            maxSum = max(subArraySum,maxSum);
        }
    }

    return maxSum;
}
int main()
{
    int arr[] = {1,2,4,-2,3};
    int n = sizeof(arr)/sizeof(int);
    int sum = subArrayPerfixSum(arr,n);
    cout<<"Maximum sub array sum: "<<sum<<endl;
    return 0;
}
