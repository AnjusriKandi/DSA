# [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/description/)

## Approach 1:

### Algorithm:

1. Run a loop i from 0 to n
2. Run a loop j from i+1 to n
3. Check if nums[i]>2*nums[j]
4. If yes increment the cnt
5. Return cnt

### Time Complexity: n^2

### Space Complexity: 1

## Approach 2:

### Algorithm:
1. merge_sort(nums, low, high) This is the standard recursive merge sort function. It:

      1. Divides the array into halves.
      2. Recursively sorts both halves.
      3. Counts reverse pairs across the halves using cnt_pairs.
      4. Merges the sorted halves using merge.

2. cnt_pairs(nums, low, mid, high) This function counts reverse pairs across the two halves:

      1. For each element in the left half (nums[low..mid]), it finds how many elements in the right half
(nums[mid+1..high]) satisfy nums[i]>2*nums[j]
      2. Since the halves are sorted, a two-pointer approach efficiently counts these in linear time.

3. merge(nums, low, mid, high) The standard merge operation:

      1. Merges two sorted halves back into the array.
      2. Ensures that each recursive step maintains sorted order for accurate counting.

4. rcnt (reverse count)

      1. A member variable that keeps track of the total number of reverse pairs found throughout the recursive process.
  
### Time Complexity: 2n log n

### Space Complexity: n
