//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    ll n,sx,sy;
    cin>>n>>sx>>sy;
    vector<pair<ll,ll>>pr;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        pr.push_back(make_pair(x,y));
    }
    sort(pr.begin(),pr.end());
    ll choto=0,chotox=0,chotoy=0,boro=0,borox=0,boroy=0;
    for(int i=0;i<n;i++)
    {
        //cout<<choto<<" "<<boro<<endl;
        ll x=pr[i].first;
        ll y=pr[i].second;
        if(x<sx){chotox++;}
        if(y<sy){chotoy++;}
        if(x>sx){borox++;}
        if(y>sy){boroy++;}
    }
    //cout<<choto<<" "<<boro<<endl;
                if(borox>=boroy&& borox>=chotox && borox>=chotoy)
           {
            cout<<borox<<endl;
            cout<<sx+1<<" "<<sy<<endl;
           }
           else if(boroy>=borox&& boroy>=chotox && boroy>=chotoy)
           {
            cout<<boroy<<endl;
            cout<<sx<<" "<<sy+1<<endl;
           }
            else if(chotoy>=boroy&& chotoy>=borox && chotoy>=chotox)
           {
            cout<<chotoy<<endl;
            cout<<sx<<" "<<sy-1<<endl;
           }
          else if(chotox>=boroy&& chotox>=borox && chotox>=chotoy)
           {
            cout<<chotox<<endl;
            cout<<sx-1<<" "<<sy<<endl;
           }

}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}
