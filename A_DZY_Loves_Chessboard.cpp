#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char ch[n][m];
    int tt=1;

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
          cin>>ch[i][j];
          if(ch[i][j]=='.')
          {
              if((j+i)%2==0)ch[i][j]='B';
              else ch[i][j]='W';
          }
      }
    } 

   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {cout<<ch[i][j];}
        cout<<"\n";
    }

    return 0;
}