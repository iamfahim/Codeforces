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
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        mp[a]++;
    }
    ll m;
    cin>>m;
    ll x;
    vector<ll>b,c;
    ll ansid=1,ansval=0;
    for(int i=1;i<=m;i++){cin>>x;b.push_back(x);}
    for(int i=1;i<=m;i++){cin>>x;c.push_back(x);}
    for(ll i=0;i<m;i++)
    {
        ll prio=0;
        prio+=mp[b[i]];
        if(ansval<prio)
        {
          ansval=prio;
          ansid=i+1;
        }
        else if(ansval==prio)
        {
            if(mp[c[ansid-1]]<=mp[c[i]])ansid=i+1;
        }
    }
    cout<<ansid<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}

