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
struct TreeNode * Make_Tree(vector<int> inorder,int inord_srt,int inord_end,vector<int> preorder,int preord_srt,int preord_end)
{
    if(inord_srt>inord_end || preord_srt>preord_end)
    {
        return NULL;
    }
    struct TreeNode* root=new TreeNode;
    root->val=preorder[preord_srt];
    int i;
    for(i=inord_srt;i<=inord_end;i++)
    {
        if(inorder[i]==preorder[preord_srt])
        {
            break;
        }
    }
    root->left=Make_Tree(inorder,inord_srt,i-1,preorder,preord_srt+1,preord_srt+i-inord_srt);
    root->right=Make_Tree(inorder,i+1,inord_end,preorder,preord_srt+i-inord_srt+1,preord_end);
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return Make_Tree(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1);
}
};
