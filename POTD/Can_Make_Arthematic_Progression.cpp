class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        int n=a.size();
        bool flag=true;
        sort(a.begin(),a.end());
        int diff=a[1]-a[0];
        for(int i=1;i<n;i++)
        {
            flag&=((a[i]-a[i-1])==diff);
        }
        return flag;
    }
};
