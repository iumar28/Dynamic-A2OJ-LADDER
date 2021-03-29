#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> s;

        for(int i=0;i<n;i++)
        {
            int data;
            cin>>data;
            s.insert(data);            
        }
        if(s.size()==1)
        cout<<"0\n";
        else
        cout<<s.size()+1<<"\n";
    }
    return 0;
}