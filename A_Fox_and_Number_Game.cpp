#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, g,gcd;
    cin>>n>>g;
    for(int nn;cin>>nn;)
    {g=__gcd(g,nn);}
    cout<<n*g<<endl;
    

    return 0;
}
