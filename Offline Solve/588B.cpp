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
bool pornoborgo(ll n)
{
    ll tam=sqrt(n);
    if(tam*tam==n)return true;
    else return false;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>divisors;
    vector<ll>pornoBRGO;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)divisors.push_back(i);
            else {divisors.push_back(n/i);divisors.push_back(i);}
        }
    }
    sort(divisors.begin(),divisors.end());
    bool ok=false;
    for(ll i=1;i<divisors.size();i++)
    {
        //cout<<divisors[i]<<endl;
        if(pornoborgo(divisors[i])){
            ok =true;
            //cout<<i<<endl;
            pornoBRGO.push_back(divisors[i]);
        }
    }
   // debug
    if(!ok){cout<<n<<endl;return;}
    /*for(auto it:pornoBRGO)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/
    for(ll i=divisors.size()-2;i>=0;i--)
    {
        bool ok1=false;
        ll tam=divisors[i];
       // cout<<tam<<endl;
        for(auto it: pornoBRGO)
        {
            //cout<<it<<endl;
            if(tam%it==0){
                ok1=true;
                break;
            }
        }
        if(!ok1){cout<<tam<<endl;return;}
    }


}
int  main()
{
    IOS
    solve();
    return 0;
}

