class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int l=0,ones=0,zeros=0;
        int ans=0;
        for(int r=0;r<n;r++)
        {
            ones+=(s[r]=='T');
            zeros+=(s[r]=='F');
            while(l<=r && min(ones,zeros)>k)
            {
                ones-=(s[l]=='T');
                zeros-=(s[l]=='F');
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
