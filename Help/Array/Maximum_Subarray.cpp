class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=a[0];
        int maxi=a[0];
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            sum=max(a[i],sum+a[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
