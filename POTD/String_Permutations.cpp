class Solution{
    public:
    //Complete this function
    vector<string>ans;
    void func(string a,string b)
    {
        if(a.size()==0)
        {
            ans.push_back(b);
        }
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            char ch=a[i];
            string left=a.substr(0,i);
            string right=a.substr(i+1);
            func(left+right,b+ch);
        }
        return ;
    }
    vector<string> permutation(string s)
    {
        func(s,"");
        sort(ans.begin(),ans.end());
        return ans;
    }
};
