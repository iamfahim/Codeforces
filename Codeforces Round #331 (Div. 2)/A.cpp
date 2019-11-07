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
    int n;
    cin>>n;
    int a=-INT_MAX,b=-INT_MAX,c=INT_MAX,d=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        a=max(x,a);
        b=max(y,b);
        c=min(x,c);
        d=min(y,d);
    }
    int ans=(a-c)*(b-d);
    if(ans==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;


    return 0;
}
