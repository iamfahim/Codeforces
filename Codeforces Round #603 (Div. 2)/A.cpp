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
ll big_mod(ll b, ll p, ll m)
{
    if(p==0)return 1;
    if(p%2==0){
        ll c = big_mod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
    }
    else return ((b%m)*(big_mod(b, p-1, m)))%m;
} ///return (b^p)%m;
void solve()
{
    vector<ll>vs;
    for(int i=1;i<=3;i++){ll a;cin>>a;vs.push_back(a);}
    sort(vs.rbegin(),vs.rend());
    ll a,b,c;
    a=vs[0];
    b=vs[1];
    c=vs[2];
    if(a>=b+c)cout<<b+c<<endl;
    else
    {
        ll dif=(a-b);
        if(dif>=c)
        {
            ll ans=dif-c;
            cout<<ans+min(a,b)<<endl;
        }
        else {
                ll ans=dif;
                c-=dif;
          a=b;
          if(c%2==0)
          {
              ans+=c;
              ans+=min(a-(c/2),b-(c/2));
          }
          else{
            ans+=c;
            ans+=min(a-(c/2)-1,b-(c/2));
          }
          cout<<ans<<endl;
        }
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

