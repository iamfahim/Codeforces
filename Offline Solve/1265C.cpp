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
    map<ll,ll>mp;
    vector<ll>v;
    ll n,a;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a;
        if(mp[a]==0)v.push_back(a);
        mp[a]++;
    }
   ll aa=0,bb=0,cc=0;
    for(int i=0;i<v.size();i++)
    {
        //cout<<aa<<" "<<bb<<" "<<cc<<endl;
        if(i==0)aa=mp[v[i]];
        else if(aa>=bb && aa+bb+mp[v[i]]<=(n/2))bb+=mp[v[i]];
        else if(aa+bb+cc+mp[v[i]]<=(n/2))cc+=mp[v[i]];
        else break;
    }
    if(aa<bb && aa<cc)
    {
       cout<<aa<<" "<<bb<<" "<<cc<<endl;
    }
    else
    {
        cout<<0<<" "<<0<<" "<<0<<endl;
    }

}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}

