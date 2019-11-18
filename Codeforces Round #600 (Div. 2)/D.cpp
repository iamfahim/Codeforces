//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
const int MOD = (int)1e9+7;
vector<ll>edge[200005];
ll visited[2000005]={0};
ll dfs(ll s)
{
    ll rt=s;
    visited[s]=1;
    for(ll i=0;i<edge[s].size();i++)
    {
       if(!visited[edge[s][i]])
       {
          rt=max(dfs(edge[s][i]),rt);
       }
    }
    return rt;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll n,m;
    cin>>n>>m;
    set<ll>st;
     ll a,b;
    for(ll i=1;i<=m;i++)
    {

        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
        st.insert(a);
        st.insert(b);
    }
    ll ans=0;
    for(auto it:st)
    {
        ll node=it;
        ll ctn=0;
        if(!visited[node])
        {
            ll mxnode=dfs(node);
            for(ll i=node;i<=mxnode;i++)
            {
                if(!visited[i])
                {
                    mxnode=max(dfs(i),mxnode);
                    ctn++;
                }
            }
        }
        ans+=ctn;
    }
    cout<<ans<<endl;
    return 0;
}
