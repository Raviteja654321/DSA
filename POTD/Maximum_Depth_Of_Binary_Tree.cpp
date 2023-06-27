class Solution{
public:
    int height(Node* root,int h)
    {
        if(root==NULL)
        {
            return h;
        }
        return max(height(root->left,h+1),height(root->right,h+1));
    }
    int maxDepth(Node *root) {
        return height(root,0);
    }
};
