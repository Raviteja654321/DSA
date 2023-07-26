class Solution {
private:
    double check(vector<int>&dist,int speed)
    {
        double time=0;
        int n=dist.size();
        for(int i=0;i<n;i++)
        {
            time=ceil(time);
            time+=(double)((double)dist[i]/(double)speed);
        }
        return time;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1,r=10000000;
        int ans=-1;
        while(l<=r)
        {
            // cout<<l<<" "<<r<<endl;
            int mid=(l+r)/2;
            if(check(dist,mid)<=hour)
            {
                ans=mid;
                r=mid-1;
            }
            else 
            {
                l=mid+1;
            }
        }
        return ans;
    }
};
