#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ret;
    cin>>ret;
    string ret1="",ret2="",ret3="";
    map<char,int> m;
    int f=-1;
    for(auto it:ret)
    {
        m[it]++;
    }
    if(m.size()==1)
    {
        cout<<ret;
    }
    else
    {
        int c=0;
        for(auto it:m)
        {
            if(it.second%2==1)
                c++;
        }
        if(c==1)
        {
            for(auto it:m)
            {
                if(it.second%2==0)
                {
                    for(int i=0;i<it.second/2;i++)
                    {
                        ret1+=it.first;
                        ret3=it.first+ret3;
                    }
                }
                else
                {
                    for(int i=0;i<it.second;i++)
                    {
                        ret2+=it.first;
                    }  
                }
            }
        }
        else
        {
            ret1="NO SOLUTION";
            ret2="";
            ret3="";
        }
        cout<<ret1+ret2+ret3;
    }
    
    return 0;
}