#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,chest=0,bicep=0,back=0;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  for(int i=1;i<=n;i=i+3)
  {
      chest+=a[i];
      if(i+1<=n)
      bicep+=a[i+1];
      if(i+2<=n)
      back+=a[i+2];
  }
//   cout<<chest<<" "<<bicep<<" "<<back;
  if(chest>bicep and chest>back)
  {cout<<"chest";}
  else if(bicep>chest && bicep>back)
  {cout<<"biceps";}
  else
  {
      cout<<"back";
  }
  

 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}