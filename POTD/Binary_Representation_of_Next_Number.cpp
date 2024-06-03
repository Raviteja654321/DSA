class Solution {
  public:
    string binaryNextNumber(string s) {
        int n=s.size();
        string ans="1";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                s[i]='1';
                ans="";
                bool flag=false;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1')
                    {
                        ans+="1";
                        flag=true;
                    }
                    else 
                    {
                        if(flag)
                        {
                            ans+="0"; 
                        }
                    }
                }
                return ans;
            }
            else 
            {
                s[i]='0';
            }
            ans+="0";
        }
        return ans;
    }
};
