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
    int best=0;
    int dfs(TreeNode* root,int height)
    {
        best=max(best,height);
        if(root==NULL)
        {
            return best;
        }
        dfs(root->left,height+1);
        dfs(root->right,height+1);
        return best;
    }
    int maxDepth(TreeNode* root) 
    {
        return dfs(root,0);
    }
};
