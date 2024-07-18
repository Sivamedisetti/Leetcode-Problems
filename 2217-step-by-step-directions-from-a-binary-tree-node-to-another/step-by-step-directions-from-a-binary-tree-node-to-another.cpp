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
    TreeNode* lowestCommonancestor(TreeNode* root, int start, int dest){
        //base case
        if(root==NULL || root->val==start || root->val==dest)return root;

        TreeNode* left=lowestCommonancestor(root->left,start,dest);
        TreeNode* right=lowestCommonancestor(root->right,start,dest);
        //result
        if(left==NULL){
           return right;
        }
        else if(right==NULL){
            return left;

        }
        else
        {
            return root;
        }
    }
    void findPath(TreeNode* root,int target,string &ans,string &current){
        if(!root)return;

        if(root->val==target)
        {
            ans=current;
            return;
        }
        current+='L';
        findPath(root->left,target,ans,current);
        current.pop_back();

        current+='R';
        findPath(root->right,target,ans,current);
        current.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {

        TreeNode* lca=lowestCommonancestor(root,startValue,destValue);
        string startPath,destPath,current;
        cout<<lca->val<<"\n";
        findPath(lca,startValue,startPath,current);
        findPath(lca,destValue,destPath,current);
        for(auto &it:startPath){
            it='U';
        }
        return startPath+destPath;
    }
};