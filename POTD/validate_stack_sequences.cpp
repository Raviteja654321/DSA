class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) 
    {
        int n=push.size();
        stack<int>st;
        int j=0,i=0;
        while(j<n && i<n)
        {
            if(st.empty())
            {
                st.push(push[i]);
                i++;
            }
            else if(!st.empty() && st.top()==pop[j])
            {
                j++;
                st.pop();
            }
            else if(pop[j]==push[i])
            {
                i++;
                j++;
            }
            else 
            {
                st.push(push[i]);
                i++;
            }
            // if(!st.empty())
            // {
            //     cout<<st.top()<<endl;
            //     cout<<i<<" "<<j<<endl;
            // }
            // else 
            // {
            //     cout<<"Empty"<<endl;
            // }
        }
        while(j<n && !st.empty())
        {
            if(!st.empty() && st.top()==pop[j])
            {
                j++;
                st.pop();
            }
            else
            {
                return false;
            }
        }
        return st.empty();
    }
};
