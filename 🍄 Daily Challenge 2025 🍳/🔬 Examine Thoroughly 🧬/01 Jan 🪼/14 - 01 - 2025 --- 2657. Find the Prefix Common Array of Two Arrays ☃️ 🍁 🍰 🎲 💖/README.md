# 2657. Find the Prefix Common Array of Two Arrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/?envType=daily-question&envId=2025-01-14"><strong>➥ ☢️ 2657 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed integer permutations `A` and `B` of length `n`.

### A prefix common array of `A` and `B` is an array `C` such that `C[i]` is equal to the count of numbers that are present at or before the index i in both `A` and `B`.

### Return *the prefix common array of* `A` *and* `B`.

### A sequence of n integers is called a permutation if it contains all integers from `1` to `n` exactly once.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ A = [1,3,2,4], B = [3,1,2,4]

  ### 📤 `Output`  ➤ [0,2,3,4]

  ### 🔦 `Explanation`  ➤ </br> At i = 0: no number is common, so C[0] = 0.</br> At i = 1: 1 and 3 are common in A and B, so C[1] = 2.</br> At i = 2: 1, 2, and 3 are common in A and B, so C[2] = 3.</br> At i = 3: 1, 2, 3, and 4 are common in A and B, so C[3] = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ A = [2,3,1], B = [3,1,2]

  ### 📤 `Output`  ➤ [0,1,3]

  ### 🔦 `Explanation` ➤ </br> At i = 0: no number is common, so C[0] = 0.</br> At i = 1: only 3 is common in A and B, so C[1] = 1.</br> At i = 2: 1, 2, and 3 are common in A and B, so C[2] = 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= A.length == B.length == n <= 50`** </br>

🔹 **`1 <= A[i], B[i] <= n`** </br>

🔹 **`It is guaranteed that A and B are both a permutation of n integers.`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Bit Manipulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
