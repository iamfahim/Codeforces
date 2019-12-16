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
    string s1="po";
    string s2="desu";
    string s3="masu";
    string s4="mnida";
    string s;
    cin>>s;
    ll sz=s.size();

        if(s[sz-1]==s1[1] && s[sz-2]==s1[0])cout<<"FILIPINO"<<endl;
        else if((s[sz-1]==s2[3]&&s[sz-2]==s2[2]&&s[sz-3]==s2[1]&& s[sz-4]==s2[0])||(s[sz-1]==s3[3]&&s[sz-2]==s3[2]&&s[sz-3]==s3[1]&& s[sz-4]==s3[0]))cout<<"JAPANESE"<<endl;
        else if((s[sz-1]==s4[4]&&s[sz-2]==s4[3]&&s[sz-3]==s4[2]&& s[sz-4]==s4[1] && s[sz-5]==s4[0]))cout<<"KOREAN"<<endl;
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

