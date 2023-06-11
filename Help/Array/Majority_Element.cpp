int Solution::majorityElement(const vector<int> &a) {
    int n=a.size();
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>n/2)
        {
            return a[i];
        }
    }
    return 0;
}
