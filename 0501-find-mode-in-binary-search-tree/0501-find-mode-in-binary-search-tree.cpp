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
    unordered_map<int,int>count;
    void findtree(TreeNode* root){
        if(root==NULL){
            return;
        }
        count[root->val]++;
        findtree(root->left);
        findtree(root->right);

    }
    vector<int> findMode(TreeNode* root) {
        findtree(root);
        int mcount=0;
        for(auto& x:count){
            mcount=max(mcount,x.second);
        }
        vector<int>res;
        for(auto& x:count){
            if(x.second==mcount){
                res.push_back(x.first);
            }
        }
        return res;
    }
};