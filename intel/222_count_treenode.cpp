/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// brute force O(N)
class Solution {
public:
    int node;
    
    void traverse(TreeNode* root){
        if(root == NULL){
            return;
        }
        node++;
        traverse(root->left);
        traverse(root->right);
    }
    
    int countNodes(TreeNode* root) {
        node = 0;
        traverse(root);
        return node;
    }
    
};

// each level check if left and right are same
// if same then return the subtree nodes
// if not the same, then count the subtrees
// h + (h-1) + (h-2) ... = h^2  = (log N)^2
class Solution {
public:

    int countNodes(TreeNode* root) {

        if(!root) return 0;

        int hl=0, hr=0;

        TreeNode *l=root, *r=root;

        while(l) {hl++;l=l->left;}

        while(r) {hr++;r=r->right;}

        if(hl==hr) return pow(2,hl)-1;

        return 1+countNodes(root->left)+countNodes(root->right);

    }
