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
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<pair<ll,ll>>v;
        ll arr[1010];
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            ll a;
            cin>>a;
            arr[i]=a;
            v.push_back(make_pair(a,i));
        }
        if(m<n || n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        //check
        sort(v.begin(),v.end());
        ll cost=0;
        vector<pair<ll,ll> >ans;

        //check
        for(ll i=0;i<n-1;i++)
        {
           ll zf=v[i].second;
        ll zc=v[i].first;
        ll zzf=v[i+1].second;
        ll zzc=v[i+1].first;
        ans.push_back(make_pair(zf,zzf));
        cost+=(zzc+zc);
        }
        //cout<<ans.size()<<endl;
        ans.push_back(make_pair(v[0].second,v[n-1].second));
        cost+=(v[0].first+v[n-1].first);
        cout<<cost<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}
