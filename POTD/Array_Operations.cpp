class Solution {
  public:
    int arrayOperations(int n, vector<int> &a) {
        vector<int>temp;
        temp.push_back(-1);
        for(int i=0;i<n;i++)
        {
            if(!a[i])
            {
                temp.push_back(i);    
            }
        }
        temp.push_back(n);
        n=temp.size();
        if(n==2)
        {
            return -1;
        }
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(temp[i]-temp[i-1]>1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
