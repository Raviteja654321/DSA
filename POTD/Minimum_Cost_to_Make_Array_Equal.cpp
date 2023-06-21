class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n=nums.size();
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++)
        {
            a.push_back({nums[i],cost[i]});
        }
        sort(a.begin(),a.end());
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i].second;
        }
        long long int median;
        long long int total=0;
        int ind=0;
        //to find median;
        while(total<(sum+1)/2 && ind<n)
        {
            total+=a[ind].second;
            median=a[ind].first;
            ind++;
        }
        //to return the value;
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=1LL*abs(a[i].first-median)*a[i].second;
        }
        return sum;
    }
};  
