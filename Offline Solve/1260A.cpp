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
    if(a>=b)
    {
        cout<<b<<endl;
    }
    else if(b%a==0)
    {
        ll ans=0;
        ll res=(b/a);
        for(ll i=1;i<=a;i++)ans+=(res*res);
        cout<<ans<<endl;
    }
    else
    {
        ll ans=0;
        ll res=(b/a);
        ll rem=b%a;
        for(ll i=1;i<=a;i++)
        {
            if(rem!=0){ans+=(res+1)*(res+1);rem--;}
            else ans+=(res*res);
        }
        cout<<ans<<endl;
    }
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--){
     solve();
    }

    return 0;
}

