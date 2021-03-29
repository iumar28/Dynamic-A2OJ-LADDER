#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> ne,p,n1,n2,n3;
    for(ll i=0;i<n;i++)
    {int data;
    cin>>data;
     if(data<0)
     ne.push_back(data);
     else if(data>0)
     p.push_back(data);
    
    }


    cout<<"negative\n";
    if(p.size()%2!=0)
    {for(auto x:ne)
    cout<<x<<" ";}
    else
    {for(int i=0;i<ne.size()-1;i++)
    cout<<ne[i]<<" ";
    }



    cout<<"\nPositive\n";
    cout<<"\n";
   if(p.size()==0)
   {if(ne.size()%2==0)
   for(int x:ne)
   cout<<x<<" ";
   
   else 
   {
       for(int i=0;i<n-1;i++)
       cout<<ne[i]<<" ";
   }



   }
    cout<<"\n";
    cout<<"\nzero\n";
    for(auto x:p)
    cout<<x<<" ";
    cout<<"0\n";




}