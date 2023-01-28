/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
stack<int>st;
void traversal(Node* root,int level)
{
    if(root==NULL)
    {
        return ;
    }
    if(level==st.size())
    {
        st.push(root->data);
    }
    traversal(root->left,level+1);
    traversal(root->right,level+1);
}
vector<int> leftView(Node *root)
{
    traversal(root,0);
    vector<int>answer;
    while(!st.empty())
    {
        answer.push_back(st.top());
        st.pop();
    }
    reverse(answer.begin(),answer.end());
    return answer;
    
}
