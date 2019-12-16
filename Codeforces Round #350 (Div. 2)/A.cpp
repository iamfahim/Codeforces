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
   ll n;
   ll two=2;
   cin>>n;
   if(n%7==0)cout<<(n/7)*2<<" "<<(n/7)*2<<endl;
   else{
        if(n%7>5)
        {
            cout<<(n/7)*2+min(abs(n%7)-5,two)<<" "<<(n/7)*2+min(n%7,two)<<endl;
        }
        else cout<<(n/7)*2<<" "<<(n/7)*2+min(n%7,two)<<endl;
   }
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}

