class Solution {
public:
    void Inorder(TreeNode* root, vector<int>& vals, vector<TreeNode*>& nodes){
        if(!root) return;
        Inorder(root->left, vals, nodes);
        vals.push_back(root->val);
        nodes.push_back(root);
        Inorder(root->right, vals, nodes);
    }
    void recoverTree(TreeNode* root) {
        vector<int> vals;
        vector<TreeNode*> nodes;
        Inorder(root, vals, nodes);
        sort(vals.begin(), vals.end());
        for(int i = 0; i < vals.size(); i++){
            nodes[i]->val = vals[i];
            
        }
    }
};

//from https://www.cnblogs.com/grandyang/p/4298069.html
