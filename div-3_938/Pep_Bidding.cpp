#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n;cin>>n;
    vector<int>a(n),b(n),c(n),d(n);
    long long u=0,ude=0,v=0,vde=0;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        u+=a[i];

    }
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        ude+=a[i];

    }
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        v+=a[i];

    }
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        vde+=a[i];

    }
    if(u>v &&ude>vde)cout<<"A"<<endl;
    else if (u<v &&ude<vde)cout<<"P"<<endl;
    else cout<<"DRAW"<<endl;
    
  }
  


    return 0;
}