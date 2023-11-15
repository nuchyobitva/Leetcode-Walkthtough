# Leetcode Walkthrough

In this repository i will be publishing my actual solutions of Leetcode Algorithmic Problems

## Medium

### [1930. Unique Length-3 Palindromic Subsequences](/medium/uniquelength3palindromicsubsequences.cpp)

Given a string s, return the number of unique palindromes of length three that are a subsequence of s.
Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
For example, "ace" is a subsequence of "abcde".

Example 1:

>**Input**: s = "aabca"
>
>**Output**: 3
>
>Explanation: The 3 palindromic subsequences of length 3 are:
>- "aba" (subsequence of "aabca")
>- "aaa" (subsequence of "aabca")
>- "aca" (subsequence of "aabca")
>
Example 2:
>
>**Input**: s = "adc"
>
>**Output**: 0
>
>Explanation: There are no palindromic subsequences of length 3 in "adc".
