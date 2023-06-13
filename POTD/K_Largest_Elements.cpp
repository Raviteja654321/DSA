class Solution{
public:	
	vector<int> kLargest(int a[], int n, int k) {
	    priority_queue<int>pq;
	    for(int i=0;i<n;i++)
	    {
	        pq.push(a[i]);
	    }
	    vector<int>ans;
	    while(k--)
	    {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    return ans;
	}

};
