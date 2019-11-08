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
void generateSquare(int n)
{
    int magicSquare[n][n];
    memset(magicSquare, 0, sizeof(magicSquare));
    int i = n/2;
    int j = n-1;
    for (int num = 1; num <= n*n; )
    {
        if (i == -1 && j == n)
        {
            j = n-2;
            i = 0;
        }
        else
        {
            if (j == n)
                j = 0;
            if (i < 0)
                i = n - 1;
        }
        if (magicSquare[i][j])
        {
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++;

        j++; i--;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout<<magicSquare[i][j]<<" ";
        cout<<endl;
    }
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int n;
    cin>>n;
    generateSquare(n);
    return 0;
}
