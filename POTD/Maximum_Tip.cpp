class Solution {
  public:
     long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        vector<pair<int,int>> abs_diff;
        
        for(int i=0;i<n;i++){
            int diff=abs(arr[i]-brr[i]);
            int ind=i;
            abs_diff.push_back({diff,ind});
        }
        
        sort(abs_diff.begin(),abs_diff.end());
        reverse(abs_diff.begin(),abs_diff.end());
        
        long long int ans=0;
        int x_orders=0;
        int y_orders=0;
        for(auto order:abs_diff){
            int ind=order.second;
            if((arr[ind]>brr[ind] && x_orders<x) || y_orders>=y){
                ans+=arr[ind];
                x_orders++;
            }else{
                ans+=brr[ind];
                y_orders++;
            }
        }
        return ans;
    }
};
