//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
const int MOD = (int)1e9+7;
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        set<ll>st1,st2;
        cin>>n;
        ll mn=INT_MAX;
        ll mx=0;
        for(ll i=1;i<=n;i++)
        {
            ll x,y;
            cin>>x>>y;
            mx=max(mx,x);
            mn=min(mn,y);
        }
        if(n==1 || mx<mn)
        {
            cout<<0<<endl;
        }
        else{
            cout<<mx-mn<<endl;
        }
    }
    return 0;
}
