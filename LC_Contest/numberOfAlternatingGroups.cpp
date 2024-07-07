class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& a) {
        int n= a.size();
        a.push_back(a[0]);
        int ans=(a[0]!=a[n-1] && a[0]!=a[1]);
        for(int i=1;i<n;i++)
        {
            ans+=(a[i]!=a[i-1] && a[i]!=a[i+1]);
        }
        return ans;
    }
};
