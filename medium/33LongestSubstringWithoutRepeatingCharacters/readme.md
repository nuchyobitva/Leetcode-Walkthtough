# The problem

## 3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

Example 1:

>**Input**: s = "abcabcbb"
>
>**Output**: 3
>
>Explanation: The answer is "abc", with the length of 3.

Example 2:
>
>**Input**: s = "bbbbb"
>
>**Output**: 1
>
>Explanation: The answer is "b", with the length of 1.

Example 3:

>**Input**: s = "pwwkew"
>
>**Output**: 4
>
>Explanation: The answer is "wke", with the length of 3.
>Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:

* 0 <= s.length <= 10<sup>4</sup>
* s consists of English letters, digits, symbols and spaces.

# Solution

## [The frist try](firsttry.cpp)

1) First things frist we save the string size not to recount it every time
2) Quick check if it's a 1 or 0 symbol string
```
if (len < 2) return len;
```
3) After that we get how many unique symbols are there in the string. We will use it, when the counter reaches this value
```
unordered_set<char> a;
for (const char& i : s) {   //  узнаём мощность алфавита
    a.insert(i);
}
max_len = a.size();
```
4) Here we start the cycle, where we are searching for substrings with unique elements and count their sizes

It's the straight solution, so here we see the its effectivity. 

![effectivity_value](effectivitysubstring33.JPG)
