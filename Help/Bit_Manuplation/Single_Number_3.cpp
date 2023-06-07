class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        int n = a.size();
        int xor1 = a[0];
        for (int i = 1; i < n; i++) {
            xor1 ^= a[i];
        }
        int xor_=xor1;
        int k = 0;
        // while ((xor1 & (1 << k)) == 0) {
        //     k++;
        // }
        while(xor1)
        {
            if(xor1%2)
            {
                break;
            }
            k++;
            xor1>>=1;
        }
        
        int sep = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] >> k) & 1) {
                sep ^= a[i];
            }
        }
        
        return {sep, xor_ ^ sep};
    }
};
