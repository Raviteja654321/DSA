class Solution {
private:
    string store="1";
public:
    string countAndSay(int n) 
    {
        string curr;
        cout<<n<<" "<<store<<endl;
        if(n==1)
        {
            return store;
        }
        else 
        {
            int size=store.size();
            int count=1;
            char num=store[0];
            for(int i=1;i<size;i++)
            {
                if(store[i]==num)
                {
                    count++;
                }
                else 
                {
                    curr.push_back(count+'0');
                    curr.push_back(num);
                    count=1;
                    num=store[i];
                }
            }
            curr.push_back(count+'0');
            curr.push_back(num);
        }
        store=curr;
        return countAndSay(n-1);
    }
};
