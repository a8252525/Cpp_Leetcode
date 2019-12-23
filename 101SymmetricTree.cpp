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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isSymmetric(root->left, root->right);
    }
    bool isSymmetric(TreeNode* l, TreeNode* r){
        if (!l && !r)return true;
        else if (l && !r || !l && r || l->val != r->val)return false;
        return isSymmetric(l->left, r->right) && isSymmetric(l->right, r->left);
    }
};
