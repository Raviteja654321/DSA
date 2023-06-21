#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int x)
{
    int n=a.size();
    map<int,int>mp;
    mp[0]=1;
    int ans=0;
    int xorr=0;
    for(int i=0;i<n;i++)
    {
        xorr^=a[i];
        ans+=mp[xorr^x];
        mp[xorr]++;
    }
    return ans;
}
