class Solution{
public:
    int LargButMinFreq(int a[], int n) {
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           mp[a[i]]++;
       }
       auto it=mp.begin();
       priority_queue<pair<int,int>>pq;
       while(it!=mp.end())
       {
           pq.push({-it->second,it->first});
           it++;
       }
       return pq.top().second;
    }
};
