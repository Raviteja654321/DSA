class Solution
{
public:
    void recur(int i,int sum,vector<int>&ans,vector<int>a)
    {   
        int n=a.size();
        if(i>=n)
        {
            ans.push_back(sum);
            return ;
        }
        recur(i+1,sum,ans,a);
        recur(i+1,sum+a[i],ans,a);
        return ;
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
        vector<int>ans;
        recur(0,0,ans,a);
        return ans;
    }
};
