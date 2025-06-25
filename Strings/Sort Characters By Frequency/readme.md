# [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/description/)

## Approach 1:

### Algorithm:

1. Create an unordered map freq to store the frequency of each character in the string s.
2. Create a vector temp to store pairs of (frequency, character).
3. Count the Frequencies:
    1. Traverse through each character i in the string s.
    2. For each character, increment its corresponding frequency in the freq map.
4. Store Frequencies in a Vector:
    1. Traverse the freq map.
    2. For each entry (character, frequency), create a pair (frequency, character) and push it into the vector temp.

4. Sort the Vector by Frequency.Use the rbegin() and rend() iterators to perform a reverse sort (i.e., from highest to lowest frequency).
5. Construct the Sorted String and return it.

### Time Complexity: n + n + n log n + n

### Space Complexity: n + n
