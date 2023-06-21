class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        if(n==1)
        {
            return ;
        }
        int ind1=n-2;
        bool flag=false;
        while(ind1>=0)
        {
            if(a[ind1]<a[ind1+1])
            {
                flag=false;
                break;
            }
            ind1--;
        }
        if(ind1<0)
        {
            sort(a.begin(),a.end());
            return ;
        }
        int ind2=n-1;
        while(ind2>=0)
        {
            if(a[ind2]>a[ind1])
            {
                break;
            }
            ind2--;
        }
        swap(a[ind1],a[ind2]);
        sort(a.begin()+ind1+1,a.end());
        return ;
    }
};
