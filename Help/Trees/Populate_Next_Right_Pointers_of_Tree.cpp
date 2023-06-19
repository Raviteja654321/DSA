/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
        {
            return NULL;
        }
        queue<Node*>q;
        q.push(root);
        Node* last=q.front();
        while(!q.empty())
        {
            int n=q.size();
            Node* temp=q.front();
            for(int i=0;i<n;i++)
            {
                if(q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right)
                {
                    q.push(q.front()->right);
                }
                if(i>0)
                {
                    last->next=q.front();
                }
                last=q.front();
                q.pop();
            }
            last->next=NULL;
        }
        return root;
    }
};
