class Solution {
  public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int>pre(maxx+2,0);
        for(int i=0;i<n;i++)
        {
            pre[l[i]]++;
            pre[r[i]+1]--;
        }
        int ans=0;
        for(int i=1;i<=maxx;i++)
        {
            pre[i]+=pre[i-1];
            ans = (pre[i] > pre[ans] ? i : ans);
        }
        return ans;
    }
};
