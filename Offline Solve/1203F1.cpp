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
    ll n,r;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    cin>>n>>r;
    vector<pair<ll,ll> >pos,neg,negv;
    for(int i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(b>=0)
        {
            pos.push_back(make_pair(a,b));
        }
        else {
                a=max(a,abs(b));
            neg.push_back(make_pair(a,b));
        }
    }
    for(int i=0;i<neg.size();i++)
    {
        negv.push_back(make_pair((neg[i].first+neg[i].second),i));
    }
    sort(pos.begin(),pos.end());
   // sort(neg.begin(),neg.end());
   sort(negv.rbegin(),negv.rend());
    for(int i=0;i<pos.size();i++)
    {
        int f=pos[i].first;
        int s=pos[i].second;
        if(r>=f)
        {
            r+=s;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
   // check
    for(int i=0;i<negv.size();i++)
    {
        int index=negv[i].second;
        int f=neg[index].first;
        int s=neg[index].second;
       // cout<<f<<" "<<s<<endl;
        if(r>=f)
        {
            r+=s;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
