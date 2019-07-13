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
ll ctn=0;
ll n=0;
bool ok=false;
string divided(string s)
{
  if(s.size()%2!=0)return s;
  string s1=divided(s.substr(0,s.size()/2));
  string s2=divided(s.substr(s.size()/2,s.size()/2));
  if(s1<s2)return s1+s2;
  else return s2+s1;
}
int  main()
{
    IOS
    string s1,s2;
    cin>>s1>>s2;
    ctn=0,n=s1.size();
    if(n%2!=0)
    {
        if(s1==s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        return 0;
    }
    if(divided(s1)==divided(s2))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
