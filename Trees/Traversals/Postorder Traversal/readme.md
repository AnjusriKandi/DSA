# [145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/description/)


## Approach:
1. Globally create a vector 'ans'.
2. If root doesn't exist i.e root==NULL, then return an empty array
4. Recursively call for left subtree.
5. Recursively call for right subtree.
6. Push data of the current root node onto ans vector.
   
## Complexity:
Time complexity: O(n) where n is the number of nodes

Space complexity: O(n) where n is the number of nodes
