class Solution
{
    public:
    struct Node* makeUnion(struct Node* h1, struct Node* h2)
    {
        struct Node* temp1=h1;
        map<int,int>mp;
        while(temp1!=NULL)
        {
            mp[temp1->data]=1;
            temp1=temp1->next;
        }
        temp1=h2;
        while(temp1!=NULL)
        {
            mp[temp1->data]=1;
            temp1=temp1->next;
        }
        auto it=mp.begin();
        struct Node* ans=new Node(it->first);
        temp1=ans;
        while(it!=mp.end())
        {
            it++;
            if((it)!=mp.end())
            {
                ans->next=new Node(it->first);
            }
            ans=ans->next;
        }
        return temp1;
    }
};
