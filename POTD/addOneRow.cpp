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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*>q;
        if(root) q.push(root);
        depth--;
        if(depth ==0 )
        {
            auto newnode=new TreeNode(val);
            newnode->left=root;
            return newnode;
        }
        while(!q.empty())
        {
            int n=q.size();
            depth--;
            if(depth==0)
            {
                for(int i=0;i<n;i++)
                {
                    auto s=q.front();
                    q.pop();
                    auto newnodeR= new TreeNode(val);
                    newnodeR->right=s->right;
                    s->right=newnodeR;
                    auto newnodeL= new TreeNode(val);
                    newnodeL->left = s->left;
                    s->left=newnodeL;
                }
                return root;
            }
            for(int i=0;i<n;i++)
            {
                auto s=q.front();
                q.pop();
                if(s->left !=NULL) q.push(s->left);
                if(s->right !=NULL) q.push(s->right);
            }
        }
        return root;
    }
};
