class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	int mini=INT_MAX;
    int minDiff(Node *root, int k)
    {
        if(root==NULL)
        {
            return mini;
        }
        mini=min(mini,abs(k-root->data));
        return min(abs(k-root->data), min(minDiff(root->right,k),minDiff(root->left,k)) );
    }
};
