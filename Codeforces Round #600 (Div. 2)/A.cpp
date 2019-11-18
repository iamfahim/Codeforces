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
        ll n,k;
        cin>>n;
        vector<ll>a,b;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            b.push_back(x);
        }
        if(n==1)
        {
            if(a[0]>b[0]){
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            //cout<<"YES"<<endl;
            continue;
        }
        ll ctn=0;
        ll fidex,lindex;
        for(ll i=0; i<n;)
        {
            bool ok=false;
            bool fok=false;
            bool lok=false;

            while(a[i]!=b[i] && i<n)
            {
                if(!fok)
                {
                    fidex=i;
                    fok=true;
                }
                i++;
                ok=true;
            }
            if(ok)
            {
                ctn++;
                lindex=i-1;
            }
            else
            {
                i++;
            }
        }
        // cout<<ctn<<endl;
        if(ctn==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(ctn==1)
        {
            bool ok=false;
           //check
            ll dif=b[fidex]-a[fidex];
            for(ll i=fidex; i<=lindex; i++)
            {
                ll dif1=b[i]-a[i];
               // cout<<dif1<<endl;
                if(dif1==dif && b[i]>=a[i])
                {
                }
                else{
                        ok=true;
                    break;
                }
            }
            if(ok)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
