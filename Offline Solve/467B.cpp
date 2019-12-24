//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    ll n,m,k;
    ll d;
    ll ans=0;
    cin>>n>>m>>k;
    vector<ll>vs;
    for(ll i=1;i<=m;i++)
    {
      ll a;
      cin>>a;
      vs.push_back(a);
    }
    cin>>d;
    for(ll i=0;i<m;i++)
    {
        ll difbit=vs[i]^d;
        ll set_bit=__builtin_popcountll(difbit);
        if(set_bit<=k)ans++;
    }
    cout<<ans<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

