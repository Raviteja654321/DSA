class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a || b || c)
        {
            if(((a&1) || (b&1))!=(c&1))
            {
                if((c&1))
                {   
                    // cout<<"in 1"<<endl;
                    ans++;
                }
                else if((a&1 & b&1))
                {
                    // cout<<"in 2"<<endl;
                    ans+=2;
                }
                else 
                {
                    // cout<<"in 3"<<endl;
                    ans+=1;
                }
            }
            a>>=1;
            b>>=1;
            c>>=1;
            // cout<<a<<" "<<b<<" "<<c<<endl;
        }
        return ans;
    }
};
