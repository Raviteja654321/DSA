class Solution {
public:
    long long putMarbles(vector<int>& a, int k) {
        priority_queue<long long int>maxi;
        priority_queue<long long int>mini;
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            maxi.push(a[i]+a[i-1]);
            mini.push(-(a[i]+a[i-1]));
        }
        k--;
        long long max_sum=a[0]+a[n-1];
        long long min_sum=a[0]+a[n-1];
        while(k--)
        {
            max_sum+=maxi.top();maxi.pop();
            min_sum-=mini.top();mini.pop();
        }
        return max_sum-min_sum;
    }
};
