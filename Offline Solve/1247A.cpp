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
    ll a,b;
    cin>>a>>b;
    ll dif=abs(a-b);
    if(a==9 && b==1)
    {
        cout<<9<<" "<<10<<endl;
        return 0;
    }
    if(a>b)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(dif==1 || dif==0)
    {
        if(a==b)
        {
            cout<<a<<0<<" "<<b<<1<<endl;
        }
        else
        {
            cout<<a<<9<<" "<<b<<0<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
