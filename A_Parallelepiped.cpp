#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
#define ll long long
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll a1,a2,a3;
  cin>>a1>>a2>>a3;
  ll a=sqrt((a1*a3)/a2),b=sqrt((a1*a2)/a3),c=sqrt((a2*a3)/a1);
  cout<<(a+b+c)*4<<endl;


 
    return 0;
}