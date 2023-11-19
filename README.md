# Leetcode Walkthrough

In this repository i will be publishing my actual solutions of Leetcode Algorithmic Problems

## Easy

## [1. Two Sum](/easy/1TwoSum/Readme.md)
Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have **_exactly_ one solution**, and you may not use the _same_ element twice.

You can return the answer in any order.
**Example 1:**

>**Input:** nums = [2,7,11,15], target = 9
>
>**Output:** [0,1]
>
>**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].

## [9. Palindrome Number](/easy/9PalindromeNumber/readme.md)
Given an integer `x`, return `true` _if_ `x` _is a_ _**palindrome**_ _, and_ `false` _otherwise_.

**Example 1:**

>**Input:** x = 121
>
>**Output:** true
>
>**Explanation:** 121 reads as 121 from left to right and from right to left.

**Example 2:**

>**Input:** x = -121
>
>**Output:** false
>
>**Explanation:** From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

## Medium

### [1930. Unique Length-3 Palindromic Subsequences](/medium/uniquelength3palindromicsubsequences/readme.md)

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
