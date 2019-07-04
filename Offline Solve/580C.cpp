//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
vector<ll>adj[100005];
ll visited[100005]={0};
ll color[100005]={0};
ll val[100005];
vector<ll>lef;
 ll n,m;
 ll par[100005];
 ll v[100005];
void dfs(ll src,ll p,ll ctn)
{
    if(visited[src])return;
    visited[src]=1;
    par[src]=p;
    bool ok=false;
    for(ll i=0;i<adj[src].size();i++)
    {
        ll u=adj[src][i];

        if(!visited[u])
        {
            ok=true;
           //cout<<"u= "<<u<<"src = "<<src<<" "<<ctn<<endl;
            if(val[u]==1){
                v[u]=ctn+1;
                if(v[u]>m)continue;
                dfs(u,src,v[u]);
            }
            else{

                    v[u]=0;
            dfs(u,src,v[u]);
            }
            //ctn=0;
        }
    }
    if(!ok && v[par[src]]<=m )
    {
        if(val[src]==1)
        {
            if(v[par[src]]+1<=m){
                    //check
                   // cout<<v[par[src]]+1<<endl;
           lef.push_back(src);
            }
        }
        else
        {
            lef.push_back(src);
        }
    }

}
int  main()
{
    IOS

    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    ll a,b;
    for(ll i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    par[1]=1;
    if(val[1]==1)
    {
        v[1]=1;
        dfs(1,1,1);
    }
    else{
    dfs(1,1,0);
    }
    /*for(ll i=1;i<=n;i++)
    {
        cout<<par[i]<<" ";
    }
    cout<<endl;
    for(ll i=1;i<=n;i++)cout<<v[i]<<" ";
    cout<<endl;
    for(ll i=0;i<lef.size();i++)cout<<lef[i]<< " ";*/
        cout<<lef.size()<<endl;
    return 0;
}
