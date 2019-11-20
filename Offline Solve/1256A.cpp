//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
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
    while(t--){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll mod=(s%n);
    ll tam=s/n;
    ll mn=min(tam,a);
    s-=(mn*n);
    if(s<=b)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}
