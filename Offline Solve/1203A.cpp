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
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[201];
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        if(n==1 || n==2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool ok1=false;
        bool ok2=false;
        for(int i=1;i<n;i++)
        {
            int tam=abs(arr[i]-arr[i+1]);

            if(tam==1)
            {
                continue;
            }
            else if( ok1==false && tam>1)
            {
                ok1=true;
            }
            else
            {
                ok2=true;
                break;
            }
        }
        if(ok1 && ok2)
        {
            cout<<"NO"<<endl;
        }
        else if(ok1==false)
        {
            cout<<"YES"<<endl;
        }
        else if(ok1 && abs(arr[1]-arr[n])==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
