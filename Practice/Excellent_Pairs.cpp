class Solution {
public:
    long long countExcellentPairs(vector<int>&a, int k) {
        set<int>st;
        for(auto it:a)
        {
            st.insert(it);
        }
        vector<int>cnt(33,0);
        for(auto it:st)
        {
            cnt[__builtin_popcount(it)]++;
        }
        long long int ans=0;
        for(int i=0;i<=32;i++)
        {
            for(int j=0;j<=32;j++)
            {
                if(i+j>=k)
                {
                    ans+=(cnt[i]*cnt[j]);
                }
            }
        }
        return ans;
    }
};
