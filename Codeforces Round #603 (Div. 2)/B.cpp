//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
ll power(ll base, ll power_number )
{
    ll num1=1;
    for(ll j=1; j<=power_number; j++)num1*=base;
    return num1;
}///return (base ^ power_number);
ll big_mod(ll b, ll p, ll m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        ll c = big_mod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
    }
    else return ((b%m)*(big_mod(b, p-1, m)))%m;
} ///return (b^p)%m;
void solve()
{
    ll n;
    cin>>n;
    vector<string>s;
    bool arr[12]={false};
    for(ll i=1; i<=n; i++)
    {
        string ss;
        cin>>ss;
        s.push_back(ss);
        arr[ss[0]-'0']=true;
    }
    //sort(s.begin(),s.end());
    ll ans=0;
    ll pos=0;
    for(int k=0; k<n; k++)
    {
        string tam=s[k];
        for(int i=k+1; i<n; i++)
        {
            if(tam!=s[i])continue;
            else
            {
                    if(tam[0]==s[i][0])
                    {
                        ans++;
                        pos=s[i][0]-'0';
                        while(arr[pos]==true)
                        {
                            pos++;
                            if(pos>=10)pos=0;

                        }
                        s[i][0]='0'+pos;
                        arr[pos]=true;
                }
            }
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++)cout<<s[i]<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

