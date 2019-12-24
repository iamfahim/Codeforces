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
    ll n,d;
    cin>>n>>d;
    ll sum=d;
    vector<pair<char,ll>>pr;
    for(int i=1;i<=n;i++)
    {
        char x;
        ll a;
        cin>>x>>a;
        pr.push_back(make_pair(x,a));
    }
    ll neinai=0;
    for(ll i=0;i<n;i++)
    {
        if(pr[i].first=='-')
        {
            if(sum-pr[i].second<0){
                neinai++;
            }
            else sum=sum-pr[i].second;
        }
        else sum=sum+pr[i].second;
    }
    cout<<sum<<" "<<neinai<<endl;
}
int  main()
{
    IOS

    solve();
    return 0;
}

