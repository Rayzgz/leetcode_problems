/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int find_min(TreeNode* root) {
       return find(root);
    }

    int find(TreeNode* node){
        if(node == NULL){
            return inf;
        }
        
        return min(find(node->left), find(node->right), node->val);
    }
};