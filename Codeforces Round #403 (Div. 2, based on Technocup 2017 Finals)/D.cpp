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
    ll n;
    cin>>n;
    vector<pair<string,string>>pr;
    vector<string>ans;
    map<string,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        string a,b;
        cin>>a>>b;
        pr.push_back(make_pair(a,b));
    }
    for(ll i=0;i<n;i++)
    {
        string tam="";
        string a=pr[i].first;
        string b=pr[i].second;
        tam+=a[0];
        tam+=a[1];
        tam+=b[0];
        if(mp[tam]==1){
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            mp[tam]=1;
            ans.push_back(tam);
        }
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)cout<<ans[i]<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

