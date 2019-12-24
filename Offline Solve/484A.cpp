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
    ll L,R,ans;
    ll tL,tR;
    cin>>L>>R;
     ans=L;
	ll x=1;
	for(ll i=0;i<64;i++)
	{
		//cout<<ans<<" "<<i<<" "<<(x<<i)<<endl;
		if((ans|(x<<i))>R)break;
		ans=(ans|(x<<i));

	}
	cout<<ans<<endl;
}
int  main()
{
    IOS
    ll TestCase;
    cin>>TestCase;
    while(TestCase--){
    solve();
    }
    return 0;
}

