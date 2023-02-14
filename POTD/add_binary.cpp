class Solution {
public:
    string addBinary(string a, string b) {
        int a_size=a.size();
        int b_size=b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";
        int sum=0,carry=0;
        for(int i=0;i<max(a_size,b_size);i++)
        {
            int one=0,two=0;
            if(i<a_size)
            {
                one=a[i]-'0';
            }
            if(i<b_size)
            {
                two=b[i]-'0';
            }
            sum= (one ^ two)^ carry;
            carry=(one && two) || (one && carry) || (two && carry) ;
            if(sum)
            {
                ans.push_back('1');
            }
            else 
            {
                ans.push_back('0');
            }
        }
        if(carry)
        {
            ans.push_back('1');    
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
