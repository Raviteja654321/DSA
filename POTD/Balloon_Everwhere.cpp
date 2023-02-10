//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int ans=min(mp['b'],min(mp['a'],min(mp['l']/2,min(mp['o']/2,mp['n']))));
        return ans;
    }
};
