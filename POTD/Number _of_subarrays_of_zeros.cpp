long long int no_of_subarrays(int n, vector<int> &a) {
    long long int ans=0;
    long long int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ans+=cnt*(cnt+1)/2;
            cnt=0;
        }
        else 
        {
            cnt++;
        }
    }
    ans+=cnt*(cnt+1)/2;
    return ans;
}
