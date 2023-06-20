class Solution {
public:
    vector<int> getAverages(vector<int>&a, int k) {
        unordered_map<int,long long int>mp;
        int n=a.size();
        long long int sum=0;
        mp[-1]=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            mp[i]=sum;
        }
        if(n<=2*k)
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(-1);
            }
            return ans;
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(-1);
        }
        for(int i=k;i<n-k;i++)
        {
            int avg=(mp[i+k]-mp[i-k-1])/(2*k+1);
            // cout<<i<<" "<<mp[i+k]<<" "<<mp[i-k-1]<<endl;
            ans.push_back(avg);
        }
        for(int i=n-k;i<n;i++)
        {
            ans.push_back(-1);
        }
        return ans;
    }
};
