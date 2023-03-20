#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION";
    }
    else if(n==4)
    {
        cout<<"2 4 1 3";
    }
    else
    {
        int arr[n];
        int k=1;
        for(int i=0;i<n;i+=2)
        {
            arr[i]=k;
            k++;
        }
        for(int i=1;i<n;i+=2)
        {
            arr[i]=k;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}