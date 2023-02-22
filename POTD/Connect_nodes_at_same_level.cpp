/* struct Node {
    int data;
    Node* left;
    Node* right;
    Node* nextRight;
};*/

class Solution{
    public:
    void connect(Node *root)
    {
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           for(int i=0;i<n;i++)
           {
               auto curr=q.front();
               q.pop();
               if(i!=n-1)
               {
                    curr->nextRight=q.front();    
               }
               else 
               {
                   curr->nextRight=NULL;
               }
               if(curr->left!=NULL)
               {
                   q.push(curr->left);
               }
               if(curr->right!=NULL)
               {
                   q.push(curr->right);
               }
           }
       }
    }    
};
