# 2784. Check if Array is Good

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-array-is-good/description/?envType=daily-question&envId=2026-05-14"><strong>➥ ☢️ 2784 Leetcode Medium ☢️ </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
