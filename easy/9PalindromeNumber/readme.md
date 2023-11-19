# The problem

## [9. Palindrome Number](/easy/9PalindromeNumber/Readme.md)
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

**Example 3:**

>**Input:** x = 10
>
>**Output:** false
>
>**Explanation:** Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

* -2<sup>31</sup> <= x <= 2<sup>31</sup>-1


# Solution

## [First try](firsttry.cpp)

The first method that I've thought of.

![first](firstscore.jpg)


## [Final method](finalpalindrome.cpp)

Well, if you need a faster algorithm, you can simplify it. 

![final](finalscore.jpg)
