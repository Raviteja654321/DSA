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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    void traversal(TreeNode* root)
    {
        if(root!=NULL)
        {
            int d_r=height(root->right)+height(root->left);     
            // cout<<d_r<<" "<<root->val<<endl;;
            best=max(best,d_r);
            traversal(root->left);
            traversal(root->right);
        }
        return ;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        traversal(root);
        return best;
    }
};
