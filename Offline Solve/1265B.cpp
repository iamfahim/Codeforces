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
    map<ll,ll>mp,mark;
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        mp[x]=i;
        //cout<<i<<" "<<mp[i]<<endl;
    }
    ll leftIndex=mp[1];
    ll rightIndex=mp[1];
    mark[1]=1;
   // cout<<leftIndex<<" "<<rightIndex<<endl;
   //for(ll i=1;i<=n;i++)cout<<i<<" ";
  // cout<<endl;
    for(ll i=2; i<=n; i++)
    {
            leftIndex=min(leftIndex,mp[i]);
            rightIndex=max(rightIndex,mp[i]);
            ll value=(rightIndex-leftIndex)+1;
            if(value==i){
            mark[value]=1;
            //cout<<i<<endl;
            }
           // cout<<value<<endl;
           // cout<<leftIndex<<" "<<rightIndex<<endl;
    }
    for(ll i=1; i<=n; i++)
    {
        if(mark[i]==0)cout<<0;
        if(mark[i]==1)cout<<1;
    }
    cout<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll TestCase;
    cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
    return 0;
}

