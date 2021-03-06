
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
    int sumNumbers(TreeNode* root) {
        long ans = 0;
        traverse(root, 0, ans);
        return ans;
    }
    
    void traverse(TreeNode *root, long num, long &ans)
    {
        if(!root)
            return;
        num = root->val + num * 10; // Calculate the number formed so far.
        if(root->left == NULL && root->right == NULL) // Leaf node condition
        {
            ans += num;
            return;
        }
		
        traverse(root->left, num, ans);
        traverse(root->right, num, ans);
    }
};
