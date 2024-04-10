class Solution{
    public:
    int findSingle(int n, int a[]){
        int ans=a[0];
        for(int i=1;i<n;i++)
        {
            ans^=a[i];
        }
        return ans;
    }
};
