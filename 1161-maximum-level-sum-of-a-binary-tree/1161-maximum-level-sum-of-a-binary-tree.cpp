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
    void findsum(TreeNode* root,int level,vector<int>&res){
        if(root==NULL){
            return;
        }
        if(level==res.size()){
            res.push_back(0);
        }
        res[level]+=root->val;
        findsum(root->left,level+1,res);
        findsum(root->right,level+1,res);
        
    }
   int maxLevelSum(TreeNode* root) {
        vector<int>res;
        findsum(root,0,res);
        int msum=res[0];
        int ans=1;
        for(int i=1;i<res.size();i++){
            if(res[i]>msum){
                msum=res[i];
                ans=i+1;
            }
        }
        return ans;
    }
};