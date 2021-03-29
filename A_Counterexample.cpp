#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll l,r;
  cin>>l>>r;
  if(l%2!=0)
  l++;
  if(l+2>r)
  {cout<<"-1";}

  else
  {
      cout<<l<<" "<<l+1<<" "<<l+2;
  }
  
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}