# [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)

## Approach:
1. Declare 'ans' vector of vectors
2. If root is NULL, return an empty vector.
3. Declare 'levelAns' vector to store the current level values, so that later this could be pushed onto 'ans'.
4. Also declare a queue, so to traverse level wise.
5. Push the root node and NULL as a marker to the end of first level.
6. While the queue is not empty
     1. Declare 'curr' as the front node in the queue.
     2. Remove the front node from the queue.
     3. If the front node is NULL, it marks the end of current level.
          1. Push the levelAns onto ans vector.
          2. Clear the levelAns.
          3. If the queue is empty after NULL, that means that there are no child nodes anymore, so come of the loop.
          4. Otherwise push NULL into the queue as a marker of the end of the level.
     4. Otherwise,
          1. Push the val of the current node into levelAns.
          2. If left child exists push it onto the queue.
          3. If right child exists push it onto the queue.
7. Return ans.

## Complexity:

Time Complexity: O(n)

Space Complexity: O(n)
