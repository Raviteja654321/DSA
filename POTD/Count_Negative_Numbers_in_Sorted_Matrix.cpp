class Solution {
public:
    int countNegatives(vector<vector<int>>& a) {
        int cnt=0;
        int n=a.size();
        int m=a[0].size();
        int ind=m-1;
        for(int i=0;i<m;i++)
        {
            if(a[0][i]<0)
            {
                ind=i;
                cnt+=(m-ind);
                break;
            }
        }
        cout<<cnt<<endl;
        for(int i=1;i<n;i++)
        {
            bool flag=0;
            while(ind>=0 && a[i][ind]<0)
            {
                flag=1;
                ind--;
            }
            if(ind<0)
            {
                cnt+=m*(n-i);
                break;
            }
            else
            {
                cnt+=(m-ind-1);
            }
            cout<<i<<" "<<ind<<" "<<cnt<<endl;
        }
        return cnt;
    }
};
