/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// find any path sums up to K
// path must go down
class Solution {
public:
    vector<int> final_path;

    void pathSum(TreeNode* root, vector<int> &path, int sum) {
        if(root == NULL){
            return;
        }

        // add current
        path.push_back(root->val);

        // check left
        pathSum(root->left, path, sum);

        // check right
        pathSum(root->right, path, sum);

        // check current
        // start from the end of the path
        int s = 0;
        for(int i = path.size() - 1; i >= 0; i++){
            s += path[i];
            if(s == sum){
                printPath(path,i);
            }
        }


        // finished with this path, remove
        path.pop_back();

    }
};