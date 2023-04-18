class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        string ans="";
        int i=0;
        int j=0;
        bool flag=1;
        while(i<n || j<m)
        {
            if(flag)
            {
                if(i<n)
                {
                    ans.push_back(s1[i++]);
                }
            }
            else 
            {
                if(j<m)
                {
                    ans.push_back(s2[j++]);
                }
            }
            flag=!flag;
        }
        return ans;
    }
};
