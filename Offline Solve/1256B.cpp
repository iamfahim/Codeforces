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
   vector<ll>arr;
   ll n,a;
   cin>>n;
   for(ll i=0;i<n;i++){cin>>a;arr.push_back(--a);}
   ll position=0;
   while(true)
   {
       ll minvalueIndex=min_element(arr.begin()+position,arr.end())-arr.begin();
       ll minVaule=arr[minvalueIndex];
       arr.erase(arr.begin()+minvalueIndex);
       arr.insert(arr.begin()+position,minVaule);
       if(position==minvalueIndex)position++;
       else position=minvalueIndex;
       if(position>=n-1)break;
   }
   for(auto it:arr)cout<<it+1<<" ";
   cout<<endl;
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

