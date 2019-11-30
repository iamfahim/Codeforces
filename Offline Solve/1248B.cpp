//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
const int MOD = (int)1e9+7;
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
ll mod_string_number(string str, ll mod_num)
{
    ll res = 0;
    for (ll i = 0; i < str.length(); i++) res = (res*10 + (ll)str[i] - '0') %mod_num;
    return res;
}///return str%mod_num;
void solve()
{
    ll n,a,sum=0;
    vector<ll>v;
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a;v.push_back(a);sum+=a;}
    sort(v.rbegin(),v.rend());
    ll ans=0;
    ll currSum=0;
    if(n%2==0)
    {
        ll sum1=0,sum2=0;
        for(int i=0;i<n/2;i++)sum1+=v[i];
        for(int i=(n/2);i<n;i++)sum2+=v[i];
       // cout<<sum1<<" "<<sum2<<endl;
        cout<<(sum1*sum1)+(sum2*sum2)<<endl;
    }
    else{
        ll sum1=0,sum2=0;
        for(int i=0;i<(n+1)/2;i++)sum1+=v[i];
        for(int i=(n+1)/2;i<n;i++)sum2+=v[i];
        //cout<<sum1<<" "<<sum2<<endl;
        cout<<(sum1*sum1)+(sum2*sum2)<<endl;
    }
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}
