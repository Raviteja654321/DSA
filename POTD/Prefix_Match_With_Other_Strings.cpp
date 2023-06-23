class Solution{   
public:
    int klengthpref(string a[], int n, int k, string s){    
        string check=s.substr(0,k);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i].length()>=k)
            {
                if(a[i].substr(0,k)==check)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
