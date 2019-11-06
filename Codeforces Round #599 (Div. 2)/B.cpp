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
    int t;
    cin>>t;
    while(t--){
    int n;
    vector<int>difch;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i]){
            difch.push_back(i);
        }
    }

    int sz=difch.size();
    if(sz>2)
    {
        cout<<"No"<<endl;
        continue;
    }
    bool ok1=false;
    for(int i=0;i<sz;i++)
    {
        char tm=s1[difch[i]];
        for(int j=0;j<sz;j++)
        {
          char tmm=s2[difch[j]];
          string c=s1;
          string cc=s2;
          c[difch[i]]=tmm;
          cc[difch[j]]=tm;
          if(c==cc)
          {
              cout<<"Yes"<<endl;
              ok1=true;
              break;
          }
        }
        if(ok1)break;
    }
    if(!ok1)
    {
    cout<<"No"<<endl;
    }
    }
    return 0;
}
