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
ll arr[100002];
void solve()
{
    ll n,k;
    cin>>n>>k;

    for(ll i=1;i<=n;i++)cin>>arr[i];
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
       sum+=i;
       if(sum>=k)
       {
           sum=sum-i;
          // cout<<sum-k<<endl;
           cout<<arr[k-sum]<<endl;
           return;
       }
    }
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);

    solve();
    return 0;
}

