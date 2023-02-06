/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    priority_queue<pair<pair<int,int>,int>>pq;
    void tra(TreeNode* root,int x,int y)
    {
        if(root==NULL)
        {
            return ;
        }
        pq.push({{-y,-x},-(root->val)});
        tra(root->left,x+1,y-1);
        tra(root->right,x+1,y+1);
        return ;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>>ans;
        tra(root,0,0);
        int top=-pq.top().first.first;
        while(!pq.empty())
        {
            vector<int>temp;
            top=-pq.top().first.first;
            while(!pq.empty() && top==-pq.top().first.first)
            {
                temp.push_back(-pq.top().second);
                pq.pop();
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
