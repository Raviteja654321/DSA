class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        vector<int>ans;
        deque<int>dq;
        int n=a.size();
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && a[dq.back()]<=a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(a[dq.front()]);
        for(int i=k;i<n;i++)
        {
            while(!dq.empty() && (i-dq.front())>=k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && a[dq.back()]<=a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(a[dq.front()]);
        }
        return ans;
    }
};
