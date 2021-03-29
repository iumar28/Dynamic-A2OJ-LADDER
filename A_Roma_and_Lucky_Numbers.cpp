#include<iostream>
using namespace std;

int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    string s="";
    while(n--)
    {
        int lucky=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='4'|| s[i]=='7')
            lucky++;
        }
        if(lucky<=k)
        ans++;
    }
    cout<<ans<<endl;

}