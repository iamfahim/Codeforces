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
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    if(l==1 && r==n)
    {
        cout<<0<<endl;
        return 0;
    }
    if(l==1)
    {
        cout<<abs(r-pos)+1<<endl;
        return 0;
    }
    if( r==n)
    {
        cout<<abs(l-pos)+1<<endl;
        return 0;
    }
    if(l!=1 && r!=n)
    {
        cout<<min(abs(pos-l),abs(r-pos))+2+(r-l)<<endl;
        return 0;
    }
    return 0;
}
