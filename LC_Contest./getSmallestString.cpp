class Solution {
public:
    string getSmallestString(string s, int k) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            for(char ch='a';ch<='z';ch++)
            {
                int dist=abs(s[i]-ch);
                dist=min(dist,26-dist);
                if(k==0)
                {
                    ans+=s[i];
                    break;
                }
                if(dist<=k)
                {
                    ans+=ch;
                    k-=dist;
                    break;
                }
            }
        }
        return ans;
    }
};
