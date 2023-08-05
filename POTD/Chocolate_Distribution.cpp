class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long ans=INT_MAX;
        sort(a.begin(),a.end());
        for(int i=0;i<=n-m;i++)
        {
            ans=min(ans,a[i+m-1]-a[i]);
        }
        return ans;
    }   
    // 5 7 11 12 13 13 
};
