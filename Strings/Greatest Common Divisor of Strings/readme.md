# [1071. Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75)

## Approach

1. If combined strings s1+s2 != s2+s1 return empty string.
2. Otherwise, GCD will be the prefix of each string, so try all the prefixes

## Complexity
- Time Complexity: len(s1)+len(s2)
- Space Complexity: len(s1)+len(s2)
