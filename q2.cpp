#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size,max,smax;
    cout<<"ENter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    max = INT_MIN;
    for(int j=1;j<=size-1;j++)
    {
        if(max<arr[j])
        max = arr[j];
    }
    cout<<"The max element is: "<<max<<endl;
    smax = INT_MIN;
    for(int j=1;j<=size-1;j++)
    {
        if(arr[j]!=max && smax<arr[j])
        smax = arr[j];
    }
    cout<<"The second max element is: "<<smax;
}