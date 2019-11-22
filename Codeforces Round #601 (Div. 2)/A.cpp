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
        ll a,b;
        ll mx;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        ll arr[]={5,2,1};
        ll dif=abs(a-b);
        ll ans=0;
        //cout<<dif<<endl;
            if(dif>=5)
            {
                ll mod=dif%5;
                ans=dif/5;
                if(mod==4)
                {
                    cout<<ans+2<<endl;
                }
                else if(mod==3)
                {
                    cout<<ans+2<<endl;
                }
                else if(mod==2)
                {
                    cout<<ans+1<<endl;

                }
                else if(mod==1)
                {
                    cout<<ans+1<<endl;
                }
                else
                {
                    cout<<ans<<endl;
                }
            }
            else if(dif==4)
            {

                    cout<<2<<endl;
            }
            else if(dif==3)
            {
                cout<<2<<endl;

            }
            else if(dif==2 || dif==1)
            {
                cout<<1<<endl;

            }
    }
    return 0;
}
