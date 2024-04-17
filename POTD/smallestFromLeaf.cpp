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
    string ans="";
    string smallestFromLeaf(TreeNode* root) {
        if (root == nullptr) return "";
        
        queue<pair<TreeNode*, string>> q;
        string initial="";
        initial.push_back('a'+root->val);
        q.push({root,initial});
        string smallest = "";
        
        while (!q.empty()) {
            int size = q.size();
            
            for (int i = 0; i < size; i++) {
                auto current = q.front();
                q.pop();
                TreeNode* node = current.first;
                string path = current.second;
                
                if (node->left == nullptr && node->right == nullptr) {
                    string currentString = path;
                    reverse(currentString.begin(), currentString.end());
                    if (smallest.empty() || currentString < smallest) {
                        smallest = currentString;
                    }
                }
                
                if (node->left != nullptr) {
                    string newPath = path + char('a' + node->left->val);
                    q.push({node->left, newPath});
                }
                
                if (node->right != nullptr) {
                    string newPath = path + char('a' + node->right->val);
                    q.push({node->right, newPath});
                }
            }
        }
        
        return smallest;
    }
};
