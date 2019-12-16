//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{  ll n;
  cin>>n;
  string s;
  cin>>s;
  set<char>st;
  for(int i=0;i<s.size();i++)st.insert(s[i]);
  //cout<<n-st.size()<<endl;
  if(st.size()==0)cout<<0<<endl;
  else if(n<=26) cout<<n-st.size()<<endl;
  else cout<<-1<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

