class Solution {
public:
    int minOperations(vector<string>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=="../")
            {
                if(ans) ans--;
            }
            else if(a[i]!="./")
            {
                ans++;
            }
        }
        return ans;
    }
};
