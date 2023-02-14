class Solution {
  public:
    int getMinimumDays(int n,string s, vector<int> &p) {
        // code here
        int total=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            total++;
        }
    }
    if(total==0)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>=1 && s[p[i]]==s[p[i]-1])
        {
            total--;
        }
        if(p[i]<n-1 && s[p[i]]==s[p[i]+1])
        {
            total--;
        }
        s[p[i]]='?';
        if(total==0)
        {
            return i+1;
        }
    }
    return 0;
    }
};
