#include<iostream>
using namespace std;
int main()
{
    int size,x;
    cout<<"ENter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    x = 1;
    bool flag = false;
    for(int j=0;j<=size-1;j++)
    {
        if(arr[j]<=0) continue;
        if(x!=arr[j])
        {
            cout<<"THE MISSING ELEMENT IS: "<<x;
            flag = true;
            break;
        }
        else
        x++;
    }
    if(flag==false)
    {
        cout<<"NO MISSING ELEMENT";
    }
    return 0;
}