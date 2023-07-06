class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& a) {
        int i=0,j=0,ans=INT_MAX,sum=0;
        int n=a.size();
        while(j<n)
        {
            sum+=a[j++];
            while(sum>=tar)
            {
                ans=min(ans,j-i);
                sum-=a[i++];
            }
        }
        return (ans==INT_MAX)?(0):ans;
    }
};
