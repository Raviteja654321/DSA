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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<TreeNode*> a(n);
            for(int i=0;i<n;i++)
            {
                a[i]=q.front();
                q.pop();
                if(a[i]!=NULL)
                {
                    q.push(a[i]->left);
                    q.push(a[i]->right);
                }
            }
            for(int i=0;i<n/2;i++)
            {
                if((a[i]==NULL && a[n-i-1]!=NULL ) ||(a[i]!=NULL && a[n-i-1]==NULL ))
                {
                    return false;
                }
                else if((a[i]!=NULL && a[n-i-1]!=NULL) && (a[i]->val!=a[n-i-1]->val))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
