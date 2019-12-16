//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
ll power(ll base, ll power_number )
{
  ll num1=1;
  for(ll j=1; j<=power_number; j++)num1*=base;
  return num1;
}///return (base ^ power_number);
void solve()
{
    string s;
    cin>>s;
    ll len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='?' && len==1)s[i]='a';
        else if(s[i]=='?' && i==0 && s[i+1]=='?')s[i]='a';
        else if(s[i]=='?' && i==0)s[i]=((s[i+1]-'a'+1)%3)+'a';
        else if(s[i]=='?' && i==len-1)s[i]=((s[i-1]-'a'+1)%3)+'a';
        else if(s[i]=='?')
        {
            if(i+1<len)
            {
                if(s[i+1]=='?')s[i]=((s[i-1]-'a'+1)%3)+'a';
                else if(s[i+1]==((s[i-1]-'a'+1)%3)+'a')s[i]=((s[i-1]-'a'+2)%3)+'a';
                else s[i]=((s[i-1]-'a'+1)%3)+'a';
            }
        }
    }
    bool ok=false;
    for(int i=0;i<len-1;i++)
    {
        if(s[i]==s[i+1]){ok=true;break;}
    }
    if(ok)cout<<-1<<endl;
    else cout<<s<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    ll TestCase;
    cin>>TestCase;
    while(TestCase--){
    solve();
    }
    return 0;
}

