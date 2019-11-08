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
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int k=1;
    map<string,int>mp;
    mp["a"]=k++;
    mp["b"]=k++;
    mp["c"]=k++;
    mp["d"]=k++;
    mp["e"]=k++;
    mp["f"]=k++;
    mp["g"]=k++;
    mp["h"]=k++;
    string s;
    cin>>s;
    string ss="";
    ss+=s[0];
    int c=s[1]-'0';
    int r=mp[ss];
    int ans=0;
    for(int i=0;i<8;i++)
    {
        int nx=c+fx[i];
        int ny=r+fy[i];
        if((nx>=1 && nx<=8) && (ny>=1 && ny<=8))ans++;
    }
    cout<<ans<<endl;
    return 0;
}
