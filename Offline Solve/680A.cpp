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
    ll a;
    set<ll>st;
    map<ll,ll>mp;
    ll sum=0;
    for(int i=1; i<=5; i++)
    {
        cin>>a;
        st.insert(a);
        mp[a]++;
        sum+=a;
    }
    set<ll>::reverse_iterator it;
    ll take=sum;
    //debug
    for(it=st.rbegin(); it!=st.rend(); ++it)
    {
        ll val=*it;
        ll three=3;
        ll mn=min(mp[val],three);
        if(mn>1){
        ll tam=sum-((val)*mn);
        take=min(tam,take);}
    }
    cout<<take<<endl;

}
int  main()
{
    IOS
        solve();

    return 0;
}

