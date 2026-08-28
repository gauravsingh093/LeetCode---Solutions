\# Continuous Subarray Sum



\## Problem

Given an integer array `nums` and an integer `k`, return `true` if there exists a subarray of length at least two whose sum is a multiple of `k`.



\## Approach

We use a hash map to store the first occurrence of each remainder.



\- Calculate the running sum.

\- Find `running\_sum % k`.

\- If the same remainder appears again and the distance between indices is at least 2, return `true`.



\## Complexity



\- Time Complexity: O(n)

\- Space Complexity: O(n)



\## Language

C++

