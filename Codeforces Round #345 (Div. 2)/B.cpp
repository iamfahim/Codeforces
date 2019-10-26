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
const int MOD = (int)1e9+7;
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int n,a;
    int arr[1010]={0};
    int mark[1010]={0};
    int Pair[1010]={0};
    vector<int>vs;
    set<int>st;
    cin>>n;
    int mx=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        mark[a]++;
        st.insert(a);
    }
    if(st.size()==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    for(auto it:st)
    {
        int val=it;
        mx=max(mx,mark[val]);
    }
    int ans=n-mx;

    cout<<ans<<endl;
    return 0;
}

