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
    vector<ll>vs;
    map<ll,ll>mp;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        ll a;
        cin>>a;
        vs.push_back(a);
    }
    vector<ll>ans;
    vector<ll>tam;
    bool ok=false;
    ll positivenum=0;
    ll len=0;
    for(ll i=0; i<n; i++)
    {
        len++;
        if(vs[i]<0)
        {
            if(mp[(-1)*vs[i]]==0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(positivenum==1 && (mp[(-1)*vs[i]]==1))
            {
                ans.push_back(len);
                len=0;
                mp[(-1)*vs[i]]=0;
                positivenum=0;
                tam.clear();
            }
            else if(mp[(-1)*vs[i]]==1)
            {
                positivenum--;
                mp[(-1)*vs[i]]=0;
            }
        }
        else if(mp[vs[i]]==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        else if(mp[vs[i]]==0)
        {
            vector<ll>::iterator it;
            it = find (tam.begin(), tam.end(), vs[i]);
            if (it != tam.end())
            {
               cout<<-1<<endl;
                return 0;
            }
            else
            {
                 mp[vs[i]]=1;
                positivenum++;
                tam.push_back(vs[i]);
            }
        }
    }
    if(positivenum!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll ln=ans.size();
    cout<<ln<<endl;
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
