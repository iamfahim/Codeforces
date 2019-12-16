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
   string s;
   cin>>s;
   ll black=0,white=0;
   for(int i=0;i<n;i++){if(s[i]=='B')black++;if(s[i]=='W')white++;}
   if(n==black || n==white){cout<<0<<endl;return;}
   if(n%2==0 && (black%2!=0 || white%2!=0)){cout<<-1<<endl;return;}

}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);

    solve();
    return 0;
}

