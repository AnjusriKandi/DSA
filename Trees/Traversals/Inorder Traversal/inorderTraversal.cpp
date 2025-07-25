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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        // If root is NULL i.e. node doesn't exist return an empty array.
        if (root == NULL)
            return {};
        // Call left subtree
        inorderTraversal(root->left);
        // Push data onto ans
        ans.push_back(root->val);
        // Call right subtree
        inorderTraversal(root->right);
        return ans;
    }
};
