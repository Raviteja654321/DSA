class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        k%=n;
        s+=s;
        string ans ="";
        for(int i=0;i<n;i++)
        {
            ans.push_back(s[i+k]);
        }
        return ans;
    }
};
