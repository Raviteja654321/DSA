class Solution{
public:
    int minimumNumber(int n,vector<int> &arr)
    {
        if(n==1){
            return arr[0];
        }
        int even = 1000000000;
        for(int i=0;i<n;i++){
            if(arr[i]%2 != 0){
                return 1;
            }
            even = min(even,arr[i]);
        }
        return even;
    }
};
