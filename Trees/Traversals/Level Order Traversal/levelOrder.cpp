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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans; // Answer vector

        // If root is NULL return empty vector
        if (root == NULL)
            return ans;

        vector<int> levelAns; // Store values present in a level
        queue<TreeNode*> q;   // helping data structure

        // Push the root node and NULL as a marker to the end of first level
        q.push(root);
        q.push(NULL);

        // End when the queue is empty.
        while (!q.empty()) {

            // Curr is the front node in the queue
            TreeNode* curr = q.front();

            // Remove the front node from the queue
            q.pop();

            // If the front node is NULL, it marks the end of current level.
            if (curr == NULL) {

                // Push the levelAns onto ans vector
                ans.push_back(levelAns);

                // Clear the levelAns
                levelAns.clear();

                // If the queue is empty after NULL, that means that there are
                // no child nodes anymore, so come of the loop. Otherwise push
                // NULL into the queue as a marker of the end of the level.
                if (!q.empty())
                    q.push(NULL);
            } else {

                // Push the val of the current node into levelAns
                levelAns.push_back(curr->val);

                // If left child exists push it onto the queue
                if (curr->left)
                    q.push(curr->left);

                // If right child exists push it onto the queue
                if (curr->right)
                    q.push(curr->right);
            }
        }
        return ans;
    }
};
