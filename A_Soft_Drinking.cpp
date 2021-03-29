#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int drink=(k*l)/nl;
  int toast=c*d;
  int salt=p/np;
 // cout<<drink<<" "<<toast<<" "<<salt<<endl;

  int res=min(salt,min(drink,toast));
  cout<<res/n<<endl;
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}