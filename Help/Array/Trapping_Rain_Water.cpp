class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();
        vector<int>left(n),right(n);
        left[0]=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>left[i-1])
            {
                left[i]=a[i];
            }
            else 
            {
                left[i]=left[i-1];
            }
        }
        right[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>right[i+1])
            {
                right[i]=a[i];
            }
            else 
            {
                right[i]=right[i+1];
            }
        }
        int answer=0;
        for(int i=0;i<n;i++)
        {
            answer+=(min(left[i],right[i])-a[i]);
        }
        return answer;
    }
};
