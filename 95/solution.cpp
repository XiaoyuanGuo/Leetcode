/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 //from https://www.cnblogs.com/grandyang/p/4301096.html
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return helper(1,n);
    }
    vector<TreeNode*> helper(int l, int r){
        if(l>r) return {nullptr};
        vector<TreeNode*> res;
        for(int i = l; i <=r; i++ ){
            auto left = helper(l,i-1);
            auto right = helper(i+1, r);
            for(auto a: left){
                for(auto b: right){
                    TreeNode* root = new TreeNode(i);
                    root->left = a;
                    root->right = b;
                    res.push_back(root);
                }
            }
        }
        return res;
        
    }
    
};
