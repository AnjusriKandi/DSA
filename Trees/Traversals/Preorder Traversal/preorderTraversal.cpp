/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        // If root is NULL i.e. node doesn't exist return an empty array.
        if (root == NULL)
            return {};
        // Push data onto ans
        ans.push_back(root->val);
        // Call left subtree
        preorderTraversal(root->left);
        // Call right subtree
        preorderTraversal(root->right);
        return ans;
    }
};
