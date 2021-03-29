#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop for(int i=0;i<n;i++)
int main()
{
    int n;
    cin>>n;
    int a[n];
    bool ans=false;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int data;cin>>data;
        mp[data]++;
    }
    int xx=n;
    if(n&1)
    {xx=n+1;}
    
    for(auto x:mp)
    {if(x.second>xx/2)
    {ans=true;}}
    if(ans)
    cout<<"NO\n";
    else
    cout<<"YES\n";
	
    return 0;
}