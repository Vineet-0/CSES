#include<bits/stdc++.h>
using namespace std;

int main()
{
    string r;
    cin>>r;
    set<int,greater<int>> s;
    int c=1;
    if(r.size()==1)
        cout<<c;
    else
    {
        for(int i=1;i<r.size();i++)
        {
            if(r[i]==r[i-1])
            {
                c++;
                if(i==r.size()-1)
                    s.insert(c);
            }
            else
            {
                s.insert(c);
                c=1;
            }
        }
        cout<<*s.begin();
    }
    return 0;
}