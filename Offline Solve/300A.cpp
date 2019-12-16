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
    ll n;
    cin>>n;
    vector<ll>vs;
    vector<ll> num_neg;
    vector<ll>num_zero;
    vector<ll>num_positive;
    for(ll i=1;i<=n;i++){ll a;cin>>a;vs.push_back(a);if(a<0)num_neg.push_back(a);if(a==0)num_zero.push_back(a);if(a>0)num_positive.push_back(a);}
    if(num_neg.size()>0)
    {
        cout<<1<<" ";
        cout<<num_neg[0]<<endl;
        num_neg.erase(num_neg.begin()+0);
    }
    if(num_positive.size()>0)
    {
        cout<<1<<" ";
        cout<<num_positive[0]<<endl;
        num_positive.erase(num_positive.begin()+0);
    }
    else if(num_neg.size()>=2)
    {
        cout<<2<<" ";
        cout<<num_neg[0]<<" "<<num_neg[1]<<endl;
        num_neg.erase(num_neg.begin()+0);
        num_neg.erase(num_neg.begin()+0);
    }
    cout<<num_neg.size()+num_positive.size()+num_zero.size()<<" ";
    for(int i=0;i<num_neg.size();i++)cout<<num_neg[i]<<" ";
     for(int i=0;i<num_positive.size();i++)cout<<num_positive[i]<<" ";
      for(int i=0;i<num_zero.size();i++)cout<<num_zero[i]<<" ";
      cout<<endl;


}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}

