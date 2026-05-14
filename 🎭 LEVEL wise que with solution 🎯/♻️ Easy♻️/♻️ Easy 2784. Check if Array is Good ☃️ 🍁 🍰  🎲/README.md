# 2784. Check if Array is Good

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-array-is-good/description/?envType=daily-question&envId=2026-05-14"><strong>➥ ♻️ 2784 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums`. We consider an array **good** if it is a permutation of an array `base[n]`.
### `base[n] = [1, 2, ..., n - 1, n, n]` (in other words, it is an array of length `n + 1` which contains `1` to `n - 1` exactly once, plus **two occurrences** of `n`).
### For example, `base[1] = [1, 1]` and `base[3] = [1, 2, 3, 3]`.
### Return `true` if the given array is **good**, otherwise return `false`.
### **Note:** A permutation of integers represents an **arrangement** of these numbers.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [2,1,3]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation`  ➤ Max element is `3`, so only candidate is `n = 3`. But `base[3] = [1,2,3,3]` has **4 elements** while `nums` has **3**. So the answer is `false`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,3,3,2]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Max element is `3`, so only candidate is `n = 3`. `nums` is a permutation of `base[3] = [1,2,3,3]`. So the answer is `true`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,1]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ Max element is `1`, so only candidate is `n = 1`. `nums` is a permutation of `base[1] = [1,1]`. So the answer is `true`.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [3,4,4,1,2,1]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ Max element is `4`, so only candidate is `n = 4`. But `base[4] = [1,2,3,4,4]` has **5 elements** while `nums` has **6**. So the answer is `false`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 200` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202784.%20Check%20if%20Array%20is%20Good%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202784.%20Check%20if%20Array%20is%20Good.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202784.%20Check%20if%20Array%20is%20Good%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202784.%20Check%20if%20Array%20is%20Good.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202784.%20Check%20if%20Array%20is%20Good%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202784.%20Check%20if%20Array%20is%20Good.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202784.%20Check%20if%20Array%20is%20Good%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202784.%20Check%20if%20Array%20is%20Good.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c1396500-c7c3-447e-adaf-a40e660b196b" width = "700px" height="462px" />

</h1>
