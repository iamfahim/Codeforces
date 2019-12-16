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
    ll n,m;
    ll arr[1005]={0};
    cin>>n>>m;
    ll u,v;
    vector<pair<ll,ll>>pr;
    for(ll i=1;i<=m;i++)
    {
        cin>>u>>v;
        arr[u]=1;arr[v]=1;
    }
    ll node;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0){node=i;break;}
    }
    for(ll i=1;i<=n;i++)
    {
        if(node!=i)pr.push_back(make_pair(node,i));
    }
    cout<<pr.size()<<endl;
    for(ll i=0;i<pr.size();i++)cout<<pr[i].first<<" "<<pr[i].second<<endl;
    cout<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();

    return 0;
}

