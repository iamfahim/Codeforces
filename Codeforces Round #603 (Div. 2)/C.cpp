//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
const int MOD = (int)1e9+7;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;                    // note: only work for N <= (last prime in vi "primes")^2
set<ll> printDivisors(ll n)
{
    // Note that this loop runs till square root
    set<ll>ans;
    ans.insert(0);
    for (ll i=1; i<=sqrt(n); i++)
    {
                ans.insert(ceil(n/i));
                ans.insert(i);
    }
    return ans;
}
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
void solve()
{
   ll n;
   cin>>n;
   set<ll>st;
   st=printDivisors(n);
   cout<<st.size()<<endl;
   for(auto it:st)cout<<it<<" ";
   cout<<endl;
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

