class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n=a.size();
        int zero=0;
        int non_zero=0;
        while(zero!=n && non_zero!=n)
        {
            while(zero<n && a[zero]!=0)
            {
                zero++;
            }
            while(non_zero<n && a[non_zero]==0)
            {
                non_zero++;
            }
            while(zero>non_zero) 
            {
                non_zero++;
            }
            if(non_zero<n && zero<n && non_zero>zero)
            {
                swap(a[zero++],a[non_zero++]);
            }
        }
    }
};
