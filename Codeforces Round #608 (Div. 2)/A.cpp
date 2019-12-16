//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    ll a,b,c,d,e,f;
    ll ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(e<f)
    {
        ll mn=min(b,min(c,d));
        ans+=f*mn;
        d-=mn;
        ans+=e*min(a,d);
        cout<<ans<<endl;
    }
    else
    {
        ll mn=min(a,d);
        ans+=e*mn;
        d-=mn;
        ans+=f*min(b,min(c,d));
        cout<<ans<<endl;
    }

}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}
