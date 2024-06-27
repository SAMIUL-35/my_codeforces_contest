
#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n,m;cin>>n>>m;
      vector<int> a(n),b(n);
      for (int i = 0; i < n; i++)
      {
        cin>>a[i];
      }
      
      for (int i = 0; i < n; i++)
      {
        cin>>b[i];
      }
      
      long long sum=0;
      long long ans=1e18;
      for (int i = n-1; i >=0; i--)
      {
        if (i < m) {
            ans=min(ans,sum+a[i]);
        }
        sum+=min(a[i],b[i]);
      }
      cout<<ans<<endl;
          }
    

  


    return 0;
}