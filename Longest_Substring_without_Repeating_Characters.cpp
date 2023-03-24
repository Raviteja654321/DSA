class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
        {
            return 0;
        }
        map<char,int>mp;
        int len=1;
        int ind=0;
        mp[s[0]]++;
        for(int i=1;i<n;i++)
        {
            if(mp[s[i]])
            {
                while(s[i]!=s[ind])
                {
                    mp[s[ind++]]--;
                }
                ind++;
            }
            else 
            {
                mp[s[i]]++;
            }
            len=max(len,i-ind+1);
        }
        return len;
    }
};
