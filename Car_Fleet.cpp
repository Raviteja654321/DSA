class Solution {
public:
    int carFleet(int tar, vector<int>& pos, vector<int>& speed) 
    {
        vector<pair<int,int>>a;
        int n=pos.size();
        for(int i=0;i<n;i++)
        {
            a.push_back({pos[i],speed[i]});
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        vector<float>t(n,0);
        for(int i=0;i<n;i++)
        {
            t[i]=tar-a[i].first;
            t[i]=(float)t[i]/(float)a[i].second;
            if(i>0)
            {
                if(t[i]<t[i-1])
                {
                    t[i]=t[i-1];
                }
            }
        }
        set<float>s;
        for(int i=0;i<n;i++)
        {
            s.insert(t[i]);
        }
        return s.size();
    }
};
