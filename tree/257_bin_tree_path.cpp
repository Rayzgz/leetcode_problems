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
    vector<string> paths;
    
    bool getPath(TreeNode* node, vector<int> &path){
        if(node == NULL){
            return true;
        }
        path.push_back(node->val);
        bool left = getPath(node->left, path);
        bool right = getPath(node->right, path);
        if(left && right){
            string cur_path = "";
            for(int i = 0; i < path.size() - 1; i++){
                cur_path += to_string(path[i]) + "->";
            }
            cur_path += to_string(path[path.size() - 1]);
            paths.push_back(cur_path);
        }
        path.pop_back();
        
        return false;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path; 
        getPath(root, path);
        return paths;
    }
};