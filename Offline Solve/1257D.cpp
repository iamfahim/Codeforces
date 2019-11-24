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
        ll n,m;
        vector<ll>v;
        vector<pair<ll,ll> >pr;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cin>>m;
        ll mx=0;
        for(int i=1; i<=m; i++)
        {
            vector<ll>::iterator up;
            ll p,s;
            cin>>p>>s;
            up=upper_bound (v.begin(), v.end(), p);
           // cout<<up - v.begin()<<endl;
            pr.push_back(make_pair(up - v.begin(),s));
            mx=max(p,mx);
        }
       // cout<<mx<<endl;
        if(v[n-1]>mx)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(pr.rbegin(),pr.rend());
        ll ans=0;
        ll mnans=0;
        ll mn=INT_MAX;
        for(int i=0; i<m; i++)
        {
          //  cout<<(pr[i].first/pr[i].second)<<endl;

            if(i==0)
            {
                if(pr[i].first%pr[i].second==0)
                {
                      mnans=(pr[i].first/pr[i].second);
                }
                else
                {
                     mnans=(pr[i].first/pr[i].second)+1;
                }
                mn=min(mn,mnans);
                ans=mnans;
            }
            else
            {
                    ans=(pr[i].first/pr[i].second);

                mn=min(mnans,mnans-ans);
                //cout<<mn<<endl;
            }
          if(mn<=1)break;

        }
        cout<<mn<<endl;
    }
    return 0;
}
