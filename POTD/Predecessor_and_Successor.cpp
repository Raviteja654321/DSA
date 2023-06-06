/* BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    private:
    vector<Node*>a;
    void inorder(Node* root)
    {
        if(root)
        {
            inorder(root->left);
            a.push_back(root);
            inorder(root->right);
        }
        return ;
    }
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        pre=suc=NULL;
        inorder(root);
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(key>a[i]->key)
            {
                pre=a[i];
            }
            else if(key<a[i]->key)
            {
                suc=a[i];
                break;
            }
        }
        return ;
    }
};
