# [1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75)

## Approach

1. Take 2 indices i and j assigned to 0
2. Using these indices i and j, iterate through the strings w1 and w2.
3. Add the char at current index i from w1 if i<len(w1) and then add the char at j from w2 if j<len(w2)
4. Return ans

## Complexity
- Time complexity: max(len(w1),len(w2))
- Space Complexity: 1  
      
