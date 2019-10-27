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
struct compare
{
    bool operator()(const std::string& first, const std::string& second)
    {
        return first.size() < second.size();
    }
};
std::vector<std::string> v;
compare c;

int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int n,k;
    cin>>n>>k;
    string vaild;
    for(int i=0; i<n; i++)
    {
        string tam;
        cin>>tam;
        v.push_back(tam);
    }
    cin>>vaild;
    int best=0,worst=0;
    int sz=vaild.size();
    std::sort(v.begin(), v.end(), c);
    int cnt1=0;
    for(int i=0; i<n; )
    {
        string ss=v[i];
        if(ss.size()==sz)
        {
            best++;
            break;
        }
        best++;
         cnt1++;
        i++;
        if(cnt1==k && i<n && v[i].size()<=sz )
        {
            best+=5;
            cnt1=0;
        }
    }
    int ctn=0;
    for(int i=0; i<n;)
    {

        string ss=v[i];
        if(ss.size()>sz)
        {
            break;
        }
        ctn++;
        worst++;
        i++;
        if(ctn==k && i<n && v[i].size()<=sz )
        {
            worst+=5;
            ctn=0;
        }
    }
    cout<<best<<" "<<worst<<endl;
    return 0;
}
