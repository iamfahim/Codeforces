//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
int  main()
{
    IOS
    ll n,d,h;
    cin>>n>>d>>h;
    if(d-h>h)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n>2 && h==1 && d==1)\
    {
        cout<<-1<<endl;
        return 0;
    }
    ll ctn=0;
    ll node=0;
    ll dia=0;
    ll node2=0;
    dia+=h;
    bool ok=false;
    for(ll i=1;i<=n;i++)
    {
        cout<<i<<" "<<i+1<<endl;
        ctn++;
        node=i+1;
        if(ctn==h)break;
    }
    if(n==node)return 0;
    node2=node;
    for(ll i=node,j=1;i<=n;i++)
    {
        if(dia==d)break;
        ok=true;
        if(j==1){
        cout<<j<<" "<<i+1<<endl;
        j++;
        }
        else
        {
            cout<<i<<" "<<i+1<<endl;
        }
        node2=i+1;
        dia++;
    }
    if(node2==n)return 0;
    for(ll i=node2,j=1;i<=n;i++)
    {
        if(i==n)break;
        if(!ok){
        cout<<2<<" "<<i+1<<endl;
        }
        else{
            cout<<1<<" "<<i+1<<endl;
        }
    }
    return 0;
}
