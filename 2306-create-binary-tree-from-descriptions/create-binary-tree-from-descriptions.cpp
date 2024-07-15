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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*>mp;
        map<int,int>findRoot;
        for(auto it:descriptions){
            if(mp[it[0]]==NULL){
                TreeNode* child=new TreeNode(it[0]);
                mp[it[0]]=child;
            }
            if(mp[it[1]]==NULL){
                TreeNode* child=new TreeNode(it[1]);
                mp[it[1]]=child;
            }
            if(it[2]==1){
                mp[it[0]]->left=mp[it[1]];
            }
            else{
                mp[it[0]]->right=mp[it[1]];
            }
            findRoot[it[1]]=it[0];
        }
        for(auto it:descriptions)
        {
            if(findRoot[it[0]]==0){
                return mp[it[0]];
            }
        }
        return NULL;
    }
};