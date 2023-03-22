class Solution{   
public:
    long long solve(int x,int y,string s){
        int n=s.size();
        stack<char>st;
        long long int answer=0;
        string first="pr",second="rp";
        if(y>x)
        {
            first="rp";
            second="pr";
            int temp=y;
            y=x;
            x=temp;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==first[1] && !st.empty() && st.top()==first[0])
            {
                answer+=x;
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        }
        string half="";
        n=0;
        while(!st.empty())
        {
            half.push_back(st.top());
            st.pop();
            n++;
        }
        reverse(half.begin(),half.end());
        for(int i=0;i<n;i++)
        {
            if(half[i]==second[1] && !st.empty() && st.top()==second[0])
            {
                answer+=y;
                st.pop();
            }
            else 
            {
                st.push(half[i]);
            }
        }
        return answer;
    }
};
