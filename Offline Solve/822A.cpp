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
    ll mn=min(a,b);
    ll sum=1;
    ll i=1;
    while(mn--){sum*=i++;}
    cout<<sum<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

