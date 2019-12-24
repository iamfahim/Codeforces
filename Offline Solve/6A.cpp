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
    vector<ll>vs;
    for(ll i=1;i<=4;i++)
    {
        ll a;
        cin>>a;
        vs.push_back(a);
    }
    sort(vs.begin(),vs.end());
    ll a=vs[0];
    ll b=vs[1];
    ll c=vs[2];
    ll d=vs[3];
    if(a+b>c || b+c>d)cout<<"TRIANGLE"<<endl;
    else if(a+b==c || a+c==d || b+c==d)cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
}
int  main()
{
    IOS
    ll TestCase;
    solve();
    return 0;
}

