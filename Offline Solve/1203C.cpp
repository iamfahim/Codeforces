//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
int divisor_count(ll n)
{
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if((n%i)==0){
            if((n/i)==i)
            {
                cnt++;
            }
            else
            {
                cnt+=2;
            }
        }
    }
    return cnt;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll n;
    cin>>n;
    vector<ll>v;
    ll a;
    for(ll i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==1)
    {
       cout<<divisor_count(v[0])<<endl;
    }
    else if(n==2)
    {
        cout<<divisor_count(__gcd(v[0],v[1]))<<endl;
    }
    else {
        ll gcd=__gcd(v[0],v[1]);
        for(ll i=2;i<n;i++)
        {
            gcd=__gcd(gcd,v[i]);
        }
        cout<<divisor_count(gcd)<<endl;
    }

    return 0;
}
