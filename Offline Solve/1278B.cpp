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
    ll a,b;
    cin>>a>>b;
    if(a==b){cout<<0<<endl;return ;}
    ll dif=abs(a-b);
    ll i=0;
    ll sum=0;
    bool ok=false;
    //cout<<dif<<endl;
    while(dif>0)
    {
       dif-=++i;
    }
    while(dif%2!=0)dif-=++i;
   cout<<i<<endl;
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

