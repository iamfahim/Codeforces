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
    int n;
    string s;
    vector<int>vs;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;)
    {
        bool ok=false;
        if(s[i]=='B')
        {
            int tam=0;
            while(s[i]=='B')
            {
             tam++;
             i++;
             ok=true;
            }
            vs.push_back(tam);
        }
        if(!ok)
        {
          i++;
        }
    }
    int ans=vs.size();
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<vs[i]<<" ";
    }
    return 0;
}
