class MinStack {
public:
    priority_queue<pair<int,int>>pq;
    stack<long long int>st;
    long long int min_ele;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            min_ele=val;
        }
        else if(val<min_ele)
        {
            st.push(val-min_ele+val);
            min_ele=val;
        }
        else 
        {
            st.push(val);
        }
    }
    
    void pop() {
        if(st.top()<min_ele)
        {
            min_ele=min_ele-st.top()+min_ele;
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<min_ele)
        {
            return min_ele;
        }
        return st.top();
    }
    
    int getMin() {
        return min_ele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
