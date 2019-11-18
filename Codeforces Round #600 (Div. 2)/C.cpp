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
    ll n,m;
    vector<ll>vs,ans;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        vs.push_back(a);
        ans.push_back(a);
    }
    sort(vs.begin(),vs.end());
    sort(ans.begin(),ans.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=vs[i];
        ans[i]=sum;
        if(i>=m)
        {
            ans[i]+=ans[i-m];
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
