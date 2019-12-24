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
{
    string a,b;
    ll Countch[30]= {0};
    cin>>a>>b;
    ll alen=a.size();
    ll blen=b.size();
    if(a<b)
    {
        cout<<a<<endl;
        return ;
    }
    ll index=0;
    for(ll i=0; i<alen; i++)Countch[a[i]-'A']++;
    bool ok=false;
    for(ll i=0; i<alen; i++)
    {
        while(Countch[index]==0)index++;
        if(a[i]>index+'A')
        {
            char ch=index+'A';
            //cout<<ch<<endl;
            for(ll j=alen-1;j>i;j--)
            {
                if(ch==(a[j]))
                {
                    swap(a[i],a[j]);
                    ok=true;
                    break;
                }
            }
            if(ok)break;
        }
        Countch[index]--;
    }
    if(a<b)cout<<a<<endl;
    else cout<<"---"<<endl;
    return ;
}
int  main()
{
    IOS
    ll TestCase;
    cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
    return 0;
}
