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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        set<int>st;
        map<int,int>mp;
        int a;
        for(int i=1; i<=4*n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        bool ok=false;
        for(int i=0;i<4*n;i+=2)
        {
            if(v[i]!=v[i+1])
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int area=v[0]*v[(4*n)-1];
        int i=0;
        int j=(4*n)-1;
        while(i<j)
        {
            int tam=v[i]*v[j];
            if(tam!=area)
            {
                ok=true;
                break;
            }
            i+=2,j-=2;
        }
        if(ok)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
    return 0;
}
