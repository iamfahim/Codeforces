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
map<string,int>mp;
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    string s;
    cin>>s;
    ll sz=s.size();
    bool ok1=false,ok2=false;
    for(int i=0;i<sz-1;i++)
    {
        if(ok1==true && s[i]=='B' && s[i+1]=='A')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ok1==false && s[i]=='A' && s[i+1]=='B')
        {
            ok1=true;
            i++;
        }

    }
     for(int i=0;i<sz-1;i++)
    {
        if(ok2==true && s[i]=='A' && s[i+1]=='B')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ok2==false && s[i]=='B' && s[i+1]=='A')
        {
            ok2=true;
            i++;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
