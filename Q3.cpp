#include<iostream>
using namespace std;
int main()
{
    int size,min;
    cout<<"ENter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    min = arr[0]; // max = INT_MIN -> #include<climits>
    for(int j=1;j<=size-1;j++)
    {
        if(min>arr[j])
        min = arr[j];
    }
    cout<<"The min element is: "<<min;
}