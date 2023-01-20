class Solution {
public:
    vector<int> nsr(vector<int>&a)
    {
        int n=a.size();
        stack<int>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            {
                while(!st.empty() && a[st.top()]>=a[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(n-1-i+1);
                }
                else 
                {
                    ans.push_back(st.top()-i);
                }
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> nsl(vector<int>&a)
    {
        int n=a.size();
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            {
                while(!st.empty() && a[st.top()]>=a[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(i-0+1);
                }
                else 
                {
                    ans.push_back(i-st.top());
                }
            }
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& a) {
        int maxi=INT_MIN;
        int n=a.size();
        vector<int>nsright=nsr(a);
        vector<int>nsleft=nsl(a);
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,(nsright[i]+nsleft[i]-1)*a[i]);
        }
        return maxi;
    }
};
