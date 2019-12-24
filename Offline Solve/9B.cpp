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
ll arr[110];
void solve()
{
   ll n;
   double vb,vs,xu,yu;
   cin>>n>>vb>>vs;
   for(ll i=1;i<=n;i++)cin>>arr[i];
   cin>>xu>>yu;
   ll index=INT_MAX;
   double MN_time=INT_MAX*(1.0);
   if(vs>vb){cout<<2<<endl;return;}
   for(ll i=2;i<=n;i++)
   {
   double timeBus=0.0,timeWalk=0.0,timeBusAndWalk=0.0;
   double disBus=sqrt((arr[i]-0)*(arr[i]-0));
   double disWalk=sqrt(((arr[i]-xu)*(arr[i]-xu))+((0-yu)*(0-yu)));
   timeBus=(disBus/(vb));
   timeWalk=(disWalk/(vs));
   timeBusAndWalk=timeBus+timeWalk;
   if(timeBusAndWalk<=MN_time)
   {
       MN_time=timeBusAndWalk;
       index=i;
   }
   //cout<<i <<" "<<timeBusAndWalk<<endl;
   }
   cout<<index<<endl;

}
int  main()
{
    IOS
    solve();
    return 0;
}

