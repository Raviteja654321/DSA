class Solution {
public:
    vector<string>ans;
    void isvalid(string s, int n)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0' && s[i-1]=='0')
            {
                return ;
            }
        }
        ans.push_back(s);
    }
    void generate(string s, int ind, int n)
    {
        if(ind==n)
        {
            isvalid(s,n);
            return ;
        }
        s.push_back('1');
        generate(s,ind+1,n);
        s.pop_back();
        s.push_back('0');
        generate(s,ind+1,n);
    }
    vector<string> validStrings(int n) {
        
        string s="";
        generate(s,0,n);
        return ans;
    }
};
