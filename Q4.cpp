#include<iostream>
using namespace std;
int main()
{
    int size,duplicate;
    cout<<"ENter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    duplicate = arr[0];
    bool flag = false;
    for(int j=0;j<=size-1;j++)
    {
        if(duplicate == arr[j])
        flag = true;    
    }
    if(flag==true)
    cout<<"Duplicate is present";
    else
    cout<<"Duplicate is absent";
    return 0;
}
