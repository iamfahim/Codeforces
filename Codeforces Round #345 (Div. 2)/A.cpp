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
    int n,m,ans=0;
    cin>>n>>m;
    int MN=0;
    if(n<=1 && m<=1){
        cout<<0<<endl;
        return 0;
    }
    while(1)
    {
        int tm1=n-2;
        int tm2=m-2;
        //cout<<n<<" "<<m<<endl;
        if(tm1<=0 && tm2<=0)
        {
           // cout<<tm1<<" "<<tm2<<endl;
            ans++;
            break;
        }
        if(tm1<=0)
        {
            n++;
            ans++;
            m-=2;
        }
        else if(tm2<=0)
        {
            m++;
            ans++;
            n-=2;
        }
        else{
            n++;
            ans++;
            m-=2;
        }
    }
    cout<<ans<<endl;

    return 0;
}
