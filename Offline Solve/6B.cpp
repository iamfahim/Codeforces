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
#define max_size 105
int Count=0;
int row,column;
int flag[max_size][max_size]= {0};
char grid[max_size][max_size];
int fx[]= {+0,+0,+1,-1};
int fy[]= {-1,+1,+0,+0};
char chk;
map<char,ll>mp;
void solve()
{
    ll n,m;
    cin>>n>>m>>chk;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    row=n,column=m;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(grid[i][j]==chk)
            {
                for(int m=0; m<4; m++)
                {
                    int x=i+fx[m];
                    int y=j+fy[m];
                    if(x<0 || y<0 || x>=row || y>=column)
                    {
                        continue;
                    }
                    if(grid[x][y]!='.' && flag[x][y]==0 && grid[x][y]!=chk && mp[grid[x][y]]==0)
                    {
                        Count++;
                        mp[grid[x][y]]=1;
                    }
                    flag[x][y]=1;
                }

            }
        }
    }
    cout<<Count<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

