📘 Day 1 – DSA Practice Notes
---
✅ Problem 1: Two Sum (Easy – Logic + Hashing)
Problem Statement

Given an array of integers and a target value, determine whether any two distinct numbers in the array add up to the target.

Example
Input:  [2, 7, 11, 15]
Target: 9

Output: true

Explanation

Check if there exists any pair (a, b) such that:

a + b = target


You only need to return:

true  (pair exists)
false (pair does not exist)

Brute Force Approach (O(n²))

Use two loops.

Compare every possible pair.

If any pair sums to target → return true.

Optimized Approach (O(n)) – Using Hash Set

Use a hash set to store numbers seen so far.

For each number:

needed = target - num


If needed is already in the set → pair exists.

Otherwise insert the number and continue.

---
✅ Problem 2: Reverse a Number (Fundamental Loop + Modulus)
Problem Statement

Given an integer, reverse its digits and print the reversed number.

Example
Input:  12345
Output: 54321

Logic Explanation

To reverse a number:

Extract the last digit using:

last_digit = num % 10


Add this digit to the reversed number:

rev = rev * 10 + last_digit


Remove the last digit from the original number:

num = num / 10


Repeat until num becomes 0.

Why This Problem Matters

Builds foundation of:

loops

modulus operation

integer division

constructing values step-by-step