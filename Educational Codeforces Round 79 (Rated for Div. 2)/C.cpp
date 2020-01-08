//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcountll(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    ll n,m,x;
    map<ll,ll>mp;
    vector<ll>a,b;
    ll ans=0;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>x;a.push_back(x);}
    for(ll i=1;i<=m;i++){cin>>x;b.push_back(x);}
    ll pos=0;
    ll ctn=0;
    for(ll i=0;i<m;i++)
    {
       // cout<<ans<<endl;
        ll val=b[i];
        if(mp[val]==1)
        {
            ans++;
            mp[val]=1;
            ctn--;
            continue;
        }
        if(val==a[pos])
        {
            ans+=(2*ctn)+1;
            mp[val]=1;
            pos++;
            continue;
        }
        while(val!=a[pos] && pos<n)
        {
            mp[a[pos]]=1;
            ctn++;
            pos++;
        }
        //cout<<ans<<endl;
        mp[val]=1;
        ans+=(2*ctn)+1;
        pos++;
    }
    cout<<ans<<endl;
}
int  main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}

