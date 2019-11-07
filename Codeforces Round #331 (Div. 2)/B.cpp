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
    ll n;
    cin>>n;
    vector<int>v;
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        st.insert(a);
    }
    ll ans=0;
    ll curv=0;
    ll pcruv=0;
    for(int i=0;i<n;i++)
    {
        curv=v[i];
        ans+=abs(pcruv-curv);
        pcruv=curv;
    }
    cout<<ans<<endl;
    return 0;
}
