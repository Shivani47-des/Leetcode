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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    void printlevel(TreeNode* root,int level,bool lefttoright,vector<int>&curr){
        if(root==NULL){
            return;
        }
        if(level==1){
            curr.push_back(root->val);
        }
        else{
            if(lefttoright){
            printlevel(root->left,level-1,lefttoright,curr);
            printlevel(root->right,level-1,lefttoright,curr);
        }
        else{
            printlevel(root->right,level-1,lefttoright,curr);
            printlevel(root->left,level-1,lefttoright,curr);
        }
    }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        int h=height(root);
        bool lefttoright=true;
        for(int i=1;i<=h;i++){
            vector<int>curr;
            printlevel(root,i,lefttoright,curr);
            result.push_back(curr);
            lefttoright=!lefttoright;
        }
        return result;
    }
};