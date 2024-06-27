#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
while (t--)
{
    int n,a,b;
    cin>>n>>a>>b;

    if(n%2==0)
    {
if((b/2)<a)
{
cout<<(n/2)*b<<endl;
}
else {
cout<<a*n<<endl;
}
    }
    else 
    {
if((b/2)<a)
{
cout<<((n/2)*b)+a<<endl;
}
else {
cout<<a*n<<endl;
}
    }
}



    return 0;
}