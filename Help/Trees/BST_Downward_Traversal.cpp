//User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
public:
    long long int ans=0;
    bool found=false;
    Node* temp=NULL;
    void finder(Node* root,int tar)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->data==tar)
        {
            found=true;
            temp=root;
        }
        else if(root->data>tar)
        {
            finder(root->left,tar);
        }
        else 
        {
            finder(root->right,tar);
        }
    }
    void tra(Node * root,int tar,int lvl)
    {
        if(root==NULL)
        {
            return ;
        }
        // if(found)
        {
            if(lvl==0)
            {
                ans+=(root->data);
            }
            tra(root->left,tar,lvl-1);
            tra(root->right,tar,lvl+1);
        }
        return ;
    }
    long long int verticallyDownBST(Node *root,int tar)
    {
        finder(root,tar);
        if(!found)
        {
            return -1;
        }
        tra(temp,tar,0);
        return ans-tar;
    }
};
