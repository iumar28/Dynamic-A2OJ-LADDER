#include<iostream>
using namespace std;
int main()
{
    int n,ans(0);
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++)
    {cin>>a[i]>>b[i];}
    for(int i=0;i<n;i++)
    {
        bool left(false),right(false),lower(false),upper(false);
        for(int j=0;j<n;i++)
        {
            if(a[j]>a[i] && b[j]==b[i])
               { right=true;}
            if(a[j]<a[i]&& b[j]==b[i])
                {left=true;}
            if(a[j]==a[i]&& b[j]<b[i])
                {lower=true;}
            if(a[j]==a[i]&& b[j]>b[i])
                {upper=true;}
        }
        if(lower and upper and left and right)
            ans++;
    }
    cout<<ans<<"\n";

    return 0;
}