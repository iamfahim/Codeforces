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
   ll n;
   cin>>n;
   set<ll>st;
   for(ll i=1;i<=n;i++)
   {
       ll a;
       cin>>a;
       if(a%2==0)st.insert(a);
   }
   ll ans=0;
   set<ll>::reverse_iterator rit;
   while(!st.empty())
   {
       ll value;
       for(rit=st.rbegin();rit!=st.rend();++rit)
       {
           value=*rit;
           break;
       }
       //cout<<value<<" "<<ans<<endl;
       st.erase(value);
       if((value/2)%2==0)
       {
           st.insert(value/2);
       }
       ans++;
   }
   cout<<ans<<endl;
}
int  main()
{
    IOS
    ll TestCase;
    cin>>TestCase;
    while(TestCase--){
    solve();
    }
    return 0;
}

