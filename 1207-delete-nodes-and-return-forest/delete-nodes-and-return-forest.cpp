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
    vector<TreeNode*> result;
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> to_delete_set(to_delete.begin(), to_delete.end());
        helper(root, to_delete_set, true);
        return result;
    }
    
    TreeNode* helper(TreeNode* root, unordered_set<int>& to_delete_set, bool isRoot) {
        if (!root) {
            return nullptr;
        }
        
        bool toDelete = to_delete_set.count(root->val);
        if (isRoot && !toDelete) {
            result.push_back(root);
        }
        
        root->left = helper(root->left, to_delete_set, toDelete);
        root->right = helper(root->right, to_delete_set, toDelete);
        
        return toDelete ? nullptr : root;
    }
};