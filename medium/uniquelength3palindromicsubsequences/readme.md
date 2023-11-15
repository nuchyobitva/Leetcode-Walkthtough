# The problem

## 1930. Unique Length-3 Palindromic Subsequences

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

Example 3:

>**Input**: s = "bbcbaba"
>
>**Output**: 4
>
>Explanation: The 4 palindromic subsequences of length 3 are:
>- "bbb" (subsequence of "bbcbaba")
>- "bcb" (subsequence of "bbcbaba")
>- "bab" (subsequence of "bbcbaba")
>- "aba" (subsequence of "bbcbaba")
 
Constraints:

* 3 <= s.length <= 10<sup>5</sup>
* s consists of only lowercase English letters.

# Solution

## [The primitive one](primitive.cpp)

There are many test units that will lead you to the following questions:
* What if it's a * big number * of a single letter?
* What if there are only 3 letters used but it's a * big number * of them?
* What if it's one unique letters in the beginning and in the last they all repeat?
* What if it's some big sequences of repeated letters?

All these and other questions may be occuring in your head while getting **Time limit exceeded** warning.

So my first solution is primitively answering to this questions step by step.

1) We make a *remake* method to get rid of bunches of sequences containg more than 3 repeated symbols in them

So from this string
> aaaaaaaaaabbbbbbbbbbbbbbbbbbccccccccccccccccdddddddddddd

We can get this one
> aaabbbcccddd

Doing this operation we save much time and don't lose our palindrome sequences

2) We recieve the alphabet set power. It helps us not to waste time if there are no new palindroms left.

By alphabet I mean unique symbols of the given string. Pow("aaa") = 1. Pow("abcd") = 4.
Also you can notice that if the power equals n, you can get n<sup>2</sup> unique palindromes.
So by making set *c* and going through the string searching unique letters we can understand the limit.
If counter == n<sup>2</sup> we can end our program.


3) We don't rewatch palindromes if there are no more staring with this letter.

To see through this one we make a *map* (char,int) , where we implement the *int* to the first letter of palindrome.
So if for the given letter the value equals 26 there is no matter to search palindromes starting with this letter.

4) It's more logical than rational, but we skip the cycle if we've seen this palindrome already
