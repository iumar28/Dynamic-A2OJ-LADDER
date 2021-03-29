#include<bits/stdc++.h>
using namespace std;

int without_zeroes(int a)
{
    int ans=0,ten=1;
    
    while(a!=0)
    {
        int rem=a%10;
        a/=10;
        if(rem!=0)
        {
            ans+=rem*ten;
            ten*=10;
        }
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a+b;
int A=without_zeroes(a);
int B=without_zeroes(b);
int C=without_zeroes(c);

if(A+B==C)
cout<<"YES\n";
else
cout<<"NO\n";

return 0;
}