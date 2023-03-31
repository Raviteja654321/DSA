class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int l=0,r=0,prev=a[0]%2;
            for(int i=1;i<n;i++)
            {
                if(a[i]%2==prev)
                {
                    r=i+1;
                }
                else 
                {
                    sort(a.begin()+l,a.begin()+r);
                    reverse(a.begin()+l,a.begin()+r);
                    l=i;
                    r=i+1;
                    prev=a[i]%2;
                }
            }
            sort(a.begin()+l,a.begin()+r);
            reverse(a.begin()+l,a.begin()+r);
            return a;
        }
};
