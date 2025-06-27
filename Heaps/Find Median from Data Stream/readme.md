# [295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/description/)

## Approach:

### Intuition:
Use two data structures that contain middle elements on their top. So that we could retrieve the values in constant time to find median.
We will be using max-heap and min-heap.

### Algorithm:

1. Declare two priority_queues maxpq and minpq.
2. In addNum():
     1. First, find the sizes of maxpq(s1) and minpq(s2).
     2. If size of maxpq is greater than size of minpq:
          1. If top of maxpq is greater than number to be inserted then remove the top element from maxpq and push it onto the minpq. Also push num onto maxpq.
          2. Otherwise push the num onto minpq.
     3. Otherwise,
          1. If maxpq is empty, push it onto maxpq.
          2. Otherwise:
               1. Find the top of minpq and maxpq.
               2. If mint is less than num the pop the top element of minpq, push num onto minq and push mint onto maxpq.
               3. Else if maxt is greater than num and s1==s2 then push num onto maxpq.
               4. Else if s1!=s2 and maxt is greater than num, then remove top element from maxpq, push num onto maxxpq and push maxt onto minpq.
               5. Otherwise, push num onto maxpq.
3. In findMedian():
     1. Find the sizes of maxpq and minpq.
     2. if (s1+s2) is even, return mean of top of maxpq and minpq.
     3. Otherwise, return top of maxpq.

### Time Complexity: 
addNum() : 1 + log n + log n
findMedian():  1

### Space Complexity: n


        
