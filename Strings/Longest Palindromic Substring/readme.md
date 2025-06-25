# [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)

## Approach:

### Algorithm:

1. Iterate Over the String:

    1. For each character (pivot), try to find palindromes in both directions:
    
    2. Odd-length palindrome: Expand around a single character (pivot).
    
    3. Even-length palindrome: Expand around the gap between two characters (pivot and pivot+1).

2. Expand Around the Pivot:

    The helper function valPal takes two pointers (p1 and p2) and tries to expand outwards from the pivot. It continues to expand as long as the characters at p1 and p2 match. The string is updated to include the new characters on both ends.

3. Update Longest Palindrome:

    After checking both possible palindromes (odd and even length), compare their lengths with the current longest palindrome (ans). If one is longer, update ans.

4. Return the Result:

    After checking all potential pivots, return the longest palindrome found.

### Time Complexity: n * (n+n)

### Space Complexity: 1
