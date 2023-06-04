class Solution
{
  public:
    string reverseEqn (string s)
    {
        int n=s.size();
        string ans="";
        string num="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            {
                ans=s[i]+num+ans;
                num="";
            }
            else 
            {
                num+=s[i];
            }
        }
        ans=num+ans;
        return ans;
    }
};
