class Solution{
    public:
        int modulo(string s,int m)
        {
            int n=s.size();
            int base=1;
            int sum=0;
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    sum+=base;
                    sum%=m;
                }
                base=base*2;
                base%=m;
                sum%=m;
            }
            return sum%m;
        }
};
