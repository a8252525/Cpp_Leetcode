/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<algorithm> //in order to use max

using namespace std; 


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        TreeNode* l;
        TreeNode* r;
        l = root -> left;
        r = root -> right;
        if (!l && !r)return 1;
        return max(maxDepth(root->left), maxDepth(root->right))+1;
    }
    /*int count_depth(TreeNode* x){
        TreeNode* l;
        TreeNode* r;
        l = x->left;
        r = x->right;
        if (!l && !r)return 0;
        return max(count_depth(x->left), count_depth(x->right))+1;
   
    } */
};
