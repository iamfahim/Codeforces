//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcount(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}   // M is prime}
template <class T> inline T bpow(T p,T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    char mat[5][5];
    ll ctn=0;
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='X')ctn++;
        }
    }
        if(ctn==0 && ctn!=9 && ctn%2!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(mat[0][0]==mat[2][2]&&mat[0][1]==mat[2][1]&&mat[0][2]==mat[2][0]&&mat[1][0]==mat[1][2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

