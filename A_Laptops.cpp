#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  map<int,int> m;
  while(n--)
  {
      int a,b;
      cin>>a>>b;
      m[a]=b;
  }
  sort(m.begin(),m.end());
  for(auto x:m)
  {cout<<x.first<<" "<<x.second<<endl;}
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}