#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n,t;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        s.insert(t);
    }
    for(int i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())
            cout<<i;
    }
    return 0;
}