//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
ll power(ll base, ll power_number )
{
  ll num1=1;
  for(ll j=1; j<=power_number; j++)num1*=base;
  return num1;
}///return (base ^ power_number);
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==0 && b==0){cout<<"YES"<<endl;return;}
    ll mn=min(a,b);
    ll dif=abs(a-b);
    if((a+b)%3==0 && 2*mn>=max(a,b))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
}
    return 0;
}
