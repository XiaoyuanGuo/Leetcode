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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        //BFS
        if(root == NULL)
            return res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            auto size=que.size();
            while(size--){
                TreeNode* tmp = que.front();
                que.pop();
                if(tmp->left != NULL)
                    que.push(tmp->left);
                if(tmp->right != NULL)
                    que.push(tmp->right);
                if(size==0)
                    res.push_back(tmp->val);
            }
            
        }
        return res;
    }
};


