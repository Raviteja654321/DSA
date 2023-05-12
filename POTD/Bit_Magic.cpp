class Solution {
  public:
    int bitMagic(int n, vector<int> &a) {
        int cnt=0;
        for(int i=0;i< n/2;i++)
        {
            if(a[i]!=a[n-1-i])
            {
                cnt++;
            }
        }
        return cnt/2+cnt%2;
    }
};
