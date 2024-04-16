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
    int ans=0;
    int helper(TreeNode* root, int sum)
    {
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL)
        {
            ans+=sum;
        }
        if(root->left) helper(root->left,sum);
        if(root->right) helper(root->right,sum);
        return ans;
    }
    int sumNumbers(TreeNode* root) {
        helper(root,0);
        return ans;
    }
};
