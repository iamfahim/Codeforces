//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;
const int MOD = (int)1e9+7;
void solve()
{
    ll n;
    cin>>n;
    string s="";
    if(n<4)
    {
        cout<<-1<<endl;
        return ;
    }
        if(n%7==0)
        {
            for(int i=1;i<=(n/7);i++)cout<<7;
            cout<<endl;
            return;
        }
    bool ok=false;
   while(n!=0)
   {
       if(n<=3)break;
       ll tam=n-4;
       s+=('0'+4);
      // cout<<tam<<endl;
       if(tam%7==0)
       {
          for(int i=1;i<=(tam/7);i++){s+=('0'+7);}
          ok=true;
          break;
       }
       n-=4;
   }
   if(ok)cout<<s<<endl;
   else cout<<-1<<endl;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    solve();
    return 0;
}

