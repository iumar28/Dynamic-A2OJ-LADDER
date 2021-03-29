#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> a;
    // set<int,greater<int>> s;
    for(int i=1;i<=n;i++)
    {
        int data;
        cin>>data;
        a.push_back(data);
  }
 
    for(int i=0;i<q;i++)
    {
        int ch,type;
        cin>>ch>>type;
    

        if(ch==1)
        {a[type-1]=1-a[type-1];}


        if(ch==2)
        {sort(a.begin(),a.end(),greater<int>());
        type=min(n,type);
        cout<<a[type-1]<<"\n";}
    }
    return 0;

}