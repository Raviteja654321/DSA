//https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' && mp['0'])
        {
            mp['0']--;
        }
        else if(s[i]=='0' && mp['1'])
        {
            mp['1']--;
        }
        else 
        {
            cout<<n-(i)<<endl;
            return ;
        }
    }
    cout<<"0"<<endl;
    return ;
}
int  main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    cin>>tt;
    //freopen("name.in", "r", stdin);
    //freopen("name.out", "w", stdout);
    while(tt--)
    {
         solve();   
    }
}
