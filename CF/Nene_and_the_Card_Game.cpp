#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(mp[a[i]])
            {
                ans++;
            }
            mp[a[i]]++;
        }
        cout<<ans<<endl;
    }
}
