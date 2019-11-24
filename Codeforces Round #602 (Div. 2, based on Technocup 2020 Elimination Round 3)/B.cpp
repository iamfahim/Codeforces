//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll mark[100005]= {0};
        vector<ll>arr,ans;
        cin>>n;
        set<ll>st;
        for(int i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            arr.push_back(a);
        }
        bool ok1=false;
         bool f=false;
        ll mx=arr[0];
        ans.push_back(arr[0]);
        ll index=1;
        mark[arr[0]]=1;
        for(ll i=1; i<n;i++)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
                mark[arr[i]]=1;
                ans.push_back(arr[i]);
            }
            else{
                while(mark[index]==1){index++;};

                if(index>arr[i]){f=true;break;}
                else{mark[index]=1;ans.push_back(index);}
            }
        }
        if(f)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(ll i=0; i<n; i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
