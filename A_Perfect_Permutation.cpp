#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  if(n%2==1)
  {cout<<"-1\n";}
  else
  {
      cout<<"2 1";
      for(int i=3;i<n;i+=2)
      {cout<<" "<<i+1<<" "<<i;}
  }
  cout<<"\n";
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}