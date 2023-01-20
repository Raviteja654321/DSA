// Method 1 using stack
class StockSpanner {
public:
    stack<int>st;
    vector<int>a;
    int ind=1;
    StockSpanner() {
        st.push(0);
        a.push_back(INT_MAX);
    }
    
    int next(int price) {
        while(a[st.top()]<=price)
        {
            st.pop();
        }
        int answer=ind-st.top();
        st.push(ind);
        ind++;
        a.push_back(price);
        return answer;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

//Method 2 using arrays
class StockSpanner {
public:
    vector<int>a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        a.push_back(price);
        int ans=0;
        int n=a.size();
        int ind=n-1;
        while(ind>=0)
        {
            if(a[ind]<=price)
            {
                ans++;
                ind--;
            }
            else 
            {
                break;
            }
        }
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
