class Solution{
public:
    int minimumTime(int n,int cur,vector<int> &p,vector<int> &t){
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,abs(cur-p[i])*t[i]);
        }
        return ans;
    }
};
