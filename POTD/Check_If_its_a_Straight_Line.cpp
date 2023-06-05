class Solution {
private:
    bool check(int i,double slope,vector<vector<int>>&a)
    {
        return slope==((double)(a[0][1]-a[i][1])/(double)(a[0][0]-a[i][0]));
    }
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        int n=a.size();
        if(a[0][0]==a[1][0])
        {
            bool flag=true;
            for(int i=1;i<n;i++)
            {
                flag&=(a[i][0]==a[i-1][0]);
            }
            return flag;
        }
        else if(a[0][1]==a[1][1])
        {
            bool flag=true;
            for(int i=1;i<n;i++)
            {
                flag&=(a[i][1]==a[i-1][1]);
            }
            return flag;
        }
        double slope=(double)(a[0][1]-a[1][1])/(double)(a[0][0]-a[1][0]);
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            flag&=check(i,slope,a);
        }
        return flag;
    }
};
