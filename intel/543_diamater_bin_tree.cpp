/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// at any given node
// longest path is either a path through this node or
// the height of this node
class Solution {
public:
    int ans;
    int longest(TreeNode* node){
        if(node == NULL){
            return 0;
        }
        // find left and right
        int left = longest(node->left);
        int right = longest(node->right);
        ans = max(ans,left+right);
        return 1 + max(left, right);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        ans = 0;
        int temp = longest(root);
        return ans; 
    }
};