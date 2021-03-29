#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0;
    cin>>n;
    string str,ans;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {cin>>str;
    mp[str]++;}
    for(auto x:mp)
    {
        if(x.second>max)
        {max=x.second;
        ans=x.first;}
    }
    cout<<ans<<"\n";
    return 0;

}