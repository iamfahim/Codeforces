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
    int n,m;
    cin>>n>>m;
    vector<int>lw,rw,lc,rc;
    bool ok1=false,ok2=false;
    bool sok1=false,sok2=false;
    for(int i=1;i<=m;i++)
    {
        if(!ok1 && !sok1)
        {
            lw.push_back(i);
            ok1=true;
            if(lw.size()==n)sok1=true;
        }
        else if(ok1)
        {
            rw.push_back(i);
            ok1=false;
        }
        else if(!ok2)
        {
            lc.push_back(i);
            ok2=true;
        }
        else if(ok2)
        {
            rc.push_back(i);
            ok2=false;
        }
    }
    //check
    int cnt=0;
    int index=0;
    while(true)
    {
        if(index<lc.size()&& cnt++<=m)cout<<lc[index]<<" ";
        if(index<lw.size() && cnt++<=m)cout<<lw[index]<<" ";
        if(index<rc.size()&& cnt++<=m)cout<<rc[index]<<" ";
        if(index<rw.size()&& cnt++<=m)cout<<rw[index]<<" ";
        index++;
        if(cnt>=m)break;
    }
    return 0;
}
