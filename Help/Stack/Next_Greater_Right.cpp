#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &a, int n) {
    stack<int>st;
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty())
        {
            ans.push_back(-1);
        }
        else if(st.top()<=a[i])
        {
            while(!st.empty() && st.top()<=a[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans.push_back(-1);
            }
            else 
            {
                ans.push_back(st.top());
            }
        }
        else 
        {
            ans.push_back(st.top());
        }
        st.push(a[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
