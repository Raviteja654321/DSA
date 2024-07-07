class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int>ans;
    bool find(struct Node* root,int target)
    {
        if(!root) return false;
        if( root->data == target)
        {
            return true;
        }
        if(find(root->right,target) || find(root->left,target))
        {
            ans.push_back(root->data);
            return true;
        }
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        find(root,target);
        return ans;
    }
};
