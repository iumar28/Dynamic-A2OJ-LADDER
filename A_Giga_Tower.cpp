#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool haseight(ll x)
{
    if(x<0)
    x*=-1;
    while(x>0)
    {if(x%10==8)
    {return true;}
    x/=10;
    }
    return false;
}

int main()
{
    ll a;
    cin>>a;
    int y=0;
    while(a<=8888888888)
    {
        if(haseight(a) and y!=0)
        break;
        a++;
        y++;
    }
    cout<<y;
    return 0;

}