# [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/description/)

## Intuition:
Preorder traversal involves printing root node data first nd then traverses to left subtree and then to right subtree.

## Approach:
1. Globally create a vector 'ans'.
2. If root doesn't exist i.e root==NULL, then return an empty array
3. Push data of the current root node onto ans vector.
4. Recursively call for left subtree.
5. Recursively call for right subtree.
## Complexity:
Time complexity: O(n) where n is the number of nodes

Space complexity: O(n) where n is the number of nodes
