//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
vector<ll>edges[200050];
ll visited[200050]={0};
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
void dfs(ll node)
{
    if(visited[node])return;
    visited[node]=1;
    for(int i=0;i<edges[node].size();i++)
    {
        dfs(edges[node][i]);
    }
}
void solve()
{
    ll n;
    set<ll>node;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s.size()==1)
        {
            node.insert(s[0]-'a');
        }
        else
        {
            ll sz=s.size();
            for(int i=0;i<sz-1;i++)
            {
                edges[s[i]-'a'].push_back(s[i+1]-'a');
                edges[s[i+1]-'a'].push_back(s[i]-'a');
                node.insert(s[i]-'a');
                node.insert(s[i+1]-'a');
            }
        }
    }
    ll ans=0;
    for(auto it:node)
    {
        if(!visited[it]){dfs(it);ans++;}
    }
    cout<<ans<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}

