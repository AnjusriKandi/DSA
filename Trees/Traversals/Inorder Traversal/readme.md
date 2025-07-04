# [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)

## Approach:
1. Globally create a vector 'ans'.
2. If root doesn't exist i.e root==NULL, then return an empty array
4. Recursively call for left subtree.
5. Push data of the current root node onto ans vector.
6. Recursively call for right subtree.
## Complexity:
Time complexity: O(n) where n is the number of nodes

Space complexity: O(n) where n is the number of nodes
