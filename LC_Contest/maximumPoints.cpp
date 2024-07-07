class Solution {
public:
    long long maximumPoints(vector<int>& a, int curr) {
        int n=a.size();
        sort(a.begin(),a.end());
        deque<long long int>dq;
        for(int i=0;i<n;i++)
        {
            dq.push_back(a[i]);
        }
        long long int ans=0;
        while(!dq.empty() && curr >= dq.front())
        {
            ans+=curr/dq.front();
            curr= curr%dq.front();
            curr+=dq.back();
            dq.pop_back();
        }
        return ans;
    }
};
