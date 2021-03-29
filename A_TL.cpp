#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);
    int v=a[0];
    int p=a[n-1];
    int c=b[0];
    int ck=max(2*v,p);
    if(ck<c)
    cout<<ck<<endl;
    else
    cout<<"-1\n";


    return 0;
}