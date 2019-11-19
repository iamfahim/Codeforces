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
        ll n;
        cin>>n;
        ll v[200005];
        map<ll,ll>mp;
        ll a;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        ll mn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(mp[v[i]]==0)
            {
                mp[v[i]]=i;
                continue;
            }
            else if(mp[v[i]]>0)
            {
                mn=min(i-mp[v[i]],mn);
                mp[v[i]]=i;
            }
            //cout<<mn<<endl;
        }
        if(mn==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else{
        cout<<mn+1<<endl;
        }
    }
    return 0;
}
