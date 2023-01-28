/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    vector<int>ans;
    void traverse(Node* root,int level)
    {
        if(root==NULL)
        {
            return ;
        }
        q.push({root,0});
        while(!q.empty())
        {
            auto top=q.front();
            q.pop();
            int lvl=top.second;
            if(top.first!=NULL)
            {
                q.push({top.first->left,lvl-1});
                q.push({top.first->right,lvl+1});
            }
            else 
            {
                continue;
            }
            if(mp.find(top.second)==mp.end())
            {
                mp[top.second]=top.first->data;
            }
        }
    }
    vector<int> topView(Node *root)
    {
        traverse(root,0);
        auto it=mp.begin();
        while(it!=mp.end())
        {
            ans.push_back(it->second);
            it++;
        }
        return ans;
    }

};
