//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution{
    //1 3 4 7 9 9 12 56
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long int mindiff=(long long int )(1e18);
        for(int i=0;i<=n-m;i++)
        {
            mindiff=min(mindiff,a[i+m-1]-a[i]);
        }
        return mindiff;
    }   
};
