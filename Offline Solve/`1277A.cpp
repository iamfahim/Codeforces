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
   string s;
   cin>>s;
   ll len=s.size();
   ll ans=(len-1)*9;
   ll cnt=0;
   string tam="";
   for(ll i=1;i<=len;i++)
   {
       tam+=s[0];
   }
   if(tam<=s)ans+=s[0]-'0';
   else ans+=s[0]-'0'-1;
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

