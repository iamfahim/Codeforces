//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>
void sieve(ll upperbound)            // create list of primes in [0..upperbound]
{
    _sieve_size = upperbound + 1;                   // add 1 to include upperbound
    bs.set();                                                 // set all bits to 1
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i])
        {

            for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
            primes.push_back((int)i);
        }
}
bool isPrime(ll N)
{
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    sieve(10000000);
    ll n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<n<<endl;
        return 0;
    }
     if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    vector<ll>ans;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                ans.push_back(i);
            }
            else
            {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    ll an=ans[0];
    for(int i=1;i<ans.size();i++)
    {
        an=__gcd(an,ans[i]);
    }
    cout<<an<<endl;
    return 0;
}
