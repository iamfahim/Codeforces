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
   ll n,Tsum;
   cin>>n>>Tsum;
   ll checksum=0;
   vector<pair<ll,ll>>pr;
   for(ll i=1;i<=n;i++)
   {
       ll tmm,tmx;
       cin>>tmm>>tmx;
       pr.push_back(make_pair(tmm,tmx));
       checksum+=tmx;
   }
   if(checksum<Tsum){cout<<"NO"<<endl;return;}
   ll arr[40]={0};
   for(ll i=0;i<n;i++){arr[i+1]=pr[i].first;Tsum-=arr[i+1];}
   if(Tsum==0){
    cout<<"YES"<<endl;
    for(ll i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return;
   }
   if(Tsum<0){cout<<"NO"<<endl;return;}
   for(ll i=0;i<n;i++)
   {
       ll niteparbo=pr[i].second-pr[i].first;
       ll mn=min(Tsum,niteparbo);
       arr[i+1]+=mn;
       Tsum-=mn;
       if(Tsum==0)break;
   }
   cout<<"YES"<<endl;
   for(ll i=1;i<=n;i++)cout<<arr[i]<<" ";
   cout<<endl;

}
int  main()
{
    IOS
    solve();
    return 0;
}
