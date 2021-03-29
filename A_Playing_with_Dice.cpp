#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b,avin=0,draw=0,bvin=0;
  cin>>a>>b;
  for(int i=1;i<=6;i++)
  {
      if(abs(a-i)<abs(b-i))
      avin++;

      if(abs(a-i)==abs(b-i))
      draw++;
      
      else if(abs(a-i)>abs(b-i))
       bvin++;

  }
  cout<<avin<<" "<<draw<<" "<<bvin<<endl;
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}