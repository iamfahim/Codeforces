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
    while(t--)
    {
        ll n,k,d;
        cin>>n>>k>>d;
        vector<ll>v;
        map<ll,ll>mp;
        ll a;
        for(int i=1;i<=n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<d;i++)
        {
           mp[v[i]]++;
        }
        ll mn=INT_MAX;
        for(int i=0;i<=n-d;i++)
        {
            if(i==0)
            {

            ll sz=mp.size();
            mn=min(mn,sz);
            }
            else{
            if(mp[v[i-1]]>0)
            {
            mp[v[i-1]]--;
            }
            if(mp[v[i-1]]==0)
            {
                mp.erase(v[i-1]);
            }
            mp[v[d+i-1]]++;
            ll sz=mp.size();
            mn=min(mn,sz);
            }

           // cout<<lst.front()<<endl;

          // cout<<lst.size()<<endl;
           // cout<<i+d-1<<endl;
            //cout<<i<<endl;
           // cout<<mn<<endl;
        }
        //for(auto it:lst)cout<<it<<" ";
        if(mn==INT_MAX)cout<<n<<endl;
        else cout<<mn<<endl;
    }
    return 0;
}
