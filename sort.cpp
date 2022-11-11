#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array before:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int i,j, id;
    for(i=0;i<n-1;i++)
    {
        id=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[id])
            {
              id=j;
            }
        }
        if(id!=i)
        {
          int temp=arr[id];
          arr[id]=arr[i];
          arr[i]=temp;

        }
        
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"\n";
    return 0;
}
