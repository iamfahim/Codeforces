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
vector<ll>res;
void printDivisors(ll n)
{

    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if (n/i == i)
               {
                   res.push_back(i);
               }

            else {
                res.push_back(i);
                res.push_back(n/i);
            }
        }
    }
}
int  main()
{
    IOS
    ll n,k;
    cin>>n>>k;
    printDivisors(n);
    if(res.size()>=k)
    {
        sort(res.begin(),res.end());
        cout<<res[k-1]<<endl;
    }
    else{
       cout<<-1<<endl;
    }
    return 0;
}
