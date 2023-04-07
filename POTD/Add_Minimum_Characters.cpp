class Solution{   
public:
    
    bool pal(string s)
    {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
    int addMinChar(string s){    
        int n=s.size();
        for(int i=n;i>=0;i--)
        {
            if(pal(s.substr(0,i)))
            {
                return n-i;
            }
        }
        return n-1;
    }
};
