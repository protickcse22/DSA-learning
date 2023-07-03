#include<bits/stdc++.h>
using namespace std;
void printSubarray(int arr[], int n)
{
    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum += arr[k];
            }
            cout<<"Sum : "<<sum;
            if(sum > max) {
                max = sum;
            }
            cout<<endl;
        }

    }
     cout<<"Maximum sum : "<<max<<endl;

}
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(int);
    printSubarray(arr,n);
    return 0;
}


