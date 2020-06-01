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
    TreeNode* invertTree(TreeNode* root) {
        swapSiblings(root);
        return root;
    }
    
    void swapSiblings(TreeNode* root)
    {
        if(!root)
            return ;
        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        swapSiblings(root->left);
        swapSiblings(root->right);
    }
};
