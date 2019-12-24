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
   ll mark[100005]={0};
   vector<ll>vs;
   ll n;
   cin>>n;
   for(ll i=1;i<=2*n;i++)
   {
       ll a;
       cin>>a;
       vs.push_back(a);
   }
   ll ans=0;
   ll ctn=0;
   for(ll i=0;i<2*n;i++)
   {
       ll val=vs[i];
      // cout<<val<<" "<<ans<<endl;
       if(mark[val]==0)
       {
           mark[val]=1;
           ctn++;
       }
       else
       {
           mark[val]=0;
           ctn--;
       }
       ans=max(ctn,ans);
   }
   cout<<ans<<endl;
}
int  main()
{
    IOS
    solve();

    return 0;
}

