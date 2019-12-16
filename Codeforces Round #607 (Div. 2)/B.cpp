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
    string a,b;
    cin>>a>>b;
    if(a<b){cout<<a<<endl;return;}
    ll arr[30]={0};
    for(ll i=0;i<a.size();i++)
    {
        arr[a[i]-'a']++;
    }
    ll point=0;
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]<=b[i]){
            arr[a[i]-'a']--;
            arr[b[i]-'a']--;
        }
        else if(a[i]>b[i])
        {
            while(arr[point]==0)
            {
               point++;
            }
            size_t found = a.find_last_of('a'+point);
            cout<<found<<endl;
            cout<<a[found]<<endl;
            swap(a[i],a[found]);
            break;
        }
    }
    if(a<b)cout<<a<<endl;
    else cout<<"---"<<endl;
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

