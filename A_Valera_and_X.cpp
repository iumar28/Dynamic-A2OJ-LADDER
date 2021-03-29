#include<bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,mdig=0,adig=0;
  set<char> s,dig;

  cin>>n;
  //char a[n][n];
  string str;
  for(int i=0;i<n;i++)
  {
      cin>>str;
      for(int j=0;j<n;j++)
      {
          if(i==j or i+j==n-1)
          {dig.insert(str[j]);}
          else
          s.insert(str[j]);
          
      }
  }
 
    
 if(dig.size()==1 && s.size()==1 and *s.begin()!=*dig.begin())
  {cout<<"YES";}
  else
    cout<<"NO";
    
    return 0;
}