#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k,l;
    cin>>k>>l;
    int count=-1;
   while(l%k==0)
   {l/=k;
   count++;}
   if(count >=0 and l==1)
   {cout<<"YES\n"<<count<<endl;}
   else{cout<<"NO\n";}

    return 0;

}