//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcountll(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
   ll r,g,b;
   cin>>r>>g>>b;
   vector<ll>vs;
   vs.push_back(r);
   vs.push_back(g);
   vs.push_back(b);
   sort(vs.begin(),vs.end());
   ll sum=vs[0]+vs[1];
   if(sum+1<vs[2]){
    cout<<"No"<<endl;
   }
   else
   {
       cout<<"Yes"<<endl;
   }
}
int  main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}

