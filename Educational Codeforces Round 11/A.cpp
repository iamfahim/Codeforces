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
    cin>>n;
    vector<int>vs;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vs.push_back(a);
    }
    //cout<<1%1<<endl;
    vector<int>nw;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        // cout<<"ff";
        if(i+1<n)
        {
            if((__gcd(vs[i+1],vs[i])!=1) && vs[i+1]!=1 && vs[i]!=1)
            {
                ans++;
                nw.push_back(vs[i]);
                nw.push_back(1);
            }
            else if((__gcd(vs[i+1],vs[i])!=1) && vs[i+1]!=1 && vs[i]!=1 )
            {
                ans++;
                nw.push_back(vs[i]);
                nw.push_back(1);
            }
            else
            {
                nw.push_back(vs[i]);
            }
        }
        else
        {
            nw.push_back(vs[i]);
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<nw.size(); i++)
    {
        cout<<nw[i]<<" ";
    }
    cout<<endl;
    return 0;
}
