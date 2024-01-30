#include<iostream>
using namespace std;
int main()
{
    int size,sum=1;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=size;j++)
    {
        sum *= arr[j];
    }
    cout<<"The product of the elements in the array is: "<<sum;
return 0;
}