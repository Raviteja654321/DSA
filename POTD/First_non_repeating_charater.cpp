```class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
        int n=s.size();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]==1)
            {
                return s[i];
            }
        }
        return '$';
    }
};```
