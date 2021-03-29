#include<bits/stdc++.h>
using namespace std;

float findArea(float a, float b, float c)  
{  
    // Length of sides must be positive  
    // and sum of any two sides  
    // must be smaller than third side.  
    if (a < 0 || b < 0 || c < 0 ||  
       (a + b <= c) || a + c <= b ||  
                       b + c <= a)  
    {  
        cout << "Not a valid trianglen";  
        exit(0);  
    }  
    float s = (a + b + c) / 2;  
    return sqrt(s * (s - a) *  
                    (s - b) * (s - c));  
}  
double findHypotenuse(double side1, double side2) 
{ 
    double h = sqrt((side1 * side1) + (side2 * side2)); 
    return h; 
} 
#define loop for(int i=0;i<n;i++)
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      vector<int> v;
      set<int> s;
      for(int i=1;i<=n;i++)
      {        
          int data;
          cin>>data;
          v.emplace_back(data);
      }
      int k=(n*(n-1))/2;
      for(int i=0;i<k;i++)
      {
          double hypo=(v[i],1);
          float area=findArea(float(hypo),v[i],1);
          if(area>=1)
          s.insert(area);

      }
      for(int x:s)    
      {cout<<x<<" ";}
      cout<<"\n";
    //   cout<<s.size()<<endl;
  }
 
	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
    return 0;
}