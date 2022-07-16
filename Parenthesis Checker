//https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' ||s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==']')
            {
                if(!st.empty() && st.top()=='[')
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }
            else if(s[i]=='}')
            {
                if(!st.empty() && st.top()=='{')
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }
            else if(s[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }

};
