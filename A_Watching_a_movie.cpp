#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp pair<ll,ll>

int main()
{
    ll n,x,p1,p2,count=0;
    cin>>n>>x;
    pp a[n];
    for(int i=0;i<n;i++)
    {cin>>p1>>p2;
    a[i]=make_pair(p1,p2);  
    }
    ll skip=1;
    for(int i=0;i<n;i++)
    {
        while(skip+x<=a[i].first)
        skip+=x;

        count+=a[i].second-skip+1;
        skip=a[i].second+1;
    }
    cout<<count;
    return 0;

}