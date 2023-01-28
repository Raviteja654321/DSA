class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            bool broke=false;
            if(a[i]<0)
            {
                while(!st.empty() && st.top()>0)
                {
                    if((-a[i])>st.top())
                    {
                        st.pop();
                    }
                    else if(-a[i]==st.top())
                    {
                        st.pop();
                        broke=true;
                        break;
                    }
                    else 
                    {
                        broke=true;
                        break;
                    }
                }
                if(!broke)
                {
                    st.push(a[i]);
                }
            }
            else 
            {
                st.push(a[i]);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
