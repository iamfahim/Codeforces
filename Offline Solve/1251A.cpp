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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        set<char>st;
        cin>>s;
        ll len=s.size();
        for(int i=0;i<len;)
        {
            ll sz=0;
            char ch=s[i];
            bool ok=false;
            while(ch==s[i] && i<len)
            {
                sz++;
                i++;
                ok=true;
            }
            if(!ok)i++;
            if(sz%2==1)st.insert(ch);
        }
        for(auto it:st)
        {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}
