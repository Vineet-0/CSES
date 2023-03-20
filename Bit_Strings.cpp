#include<bits/stdc++.h>
using namespace std;

long long bit_strings(long long n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    long long p=(bit_strings(n/2))%1000000007;
    if(n%2==1)
        return (p*p*2)%1000000007;
    return (p*p)%1000000007;
}
int main()
{
    int n;
    cin>>n;
    cout<<bit_strings(n);
    return 0;
}