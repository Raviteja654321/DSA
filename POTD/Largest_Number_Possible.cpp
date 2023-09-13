class Solution{
public:
    string findLargest(int n, int s)
    {
        string ans;
        if(s>9*n)
        {
            return "-1";
        }
        if(s==0 && n>=2)
        {
            return "-1";
        }
        for(int i=0;i<n;i++)
        {
            if(s>=9)
            {
                ans+="9";
                s-=9;
            }
            else 
            {
                ans+=to_string(s);
                s=0;
            }
        }
        return ans;
    }
};
