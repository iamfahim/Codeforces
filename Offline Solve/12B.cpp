//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcount(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
  string s1,s2;
  cin>>s1>>s2;
  ll arr1[10]={0};
  ll arr2[10]={0};
  for(ll i=0;i<s1.size();i++)arr1[s1[i]-'0']++;
  for(ll i=0;i<s2.size();i++)arr2[s2[i]-'0']++;
  bool ok=false;
  for(ll i=0;i<=9;i++)
  {
      if(arr1[i]!=arr2[i])
      {
          cout<<"WRONG_ANSWER"<<endl;
          return;
      }
  }
  string ans="";
  for(ll i=1;i<=9;i++)
  {
      if(arr1[i]>0){ans+='0'+i;arr1[i]--;break;}
  }
  for(ll i=0;i<=9;i++)
  {
      while(arr1[i]!=0)
      {
          ans+='0'+i;
          arr1[i]--;
      }
  }
  if(ans==s2)cout<<"OK"<<endl;
  else cout<<"WRONG_ANSWER"<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

