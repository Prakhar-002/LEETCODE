# 2200. Find All K-Distant Indices in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/description/?envType=daily-question&envId=2025-06-24"><strong>➥ ♻️ 2200 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of size `n` and two integers, `key` and `k`.

### A *k-distant index* is defined as an index `i` in `nums` for which there exists at least one index `j` such that the following conditions are true:

- `|i - j| <= k` (the absolute difference between `i` and `j` is less than or equal to `k`).
- `nums[j] == key` (the element at index `j` is equal to `key`).

### Your task is to return a list containing all the *k-distant indices*, sorted in increasing order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,4,9,1,3,9,5], key = 9, k = 1

  ### 📤 `Output`  ➤ [1,2,3,4,5,6]

  ### 🔦 `Explanation`  ➤
Here, nums[2] == key and nums[5] == key.

- For index 0, |0 - 2| > k and |0 - 5| > k, so there is no j where |0 - j| <= k and nums[j] == key. Thus, 0 is not a k-distant index.
- For index 1, |1 - 2| <= k and nums[2] == key, so 1 is a k-distant index.
- For index 2, |2 - 2| <= k and nums[2] == key, so 2 is a k-distant index.
- For index 3, |3 - 2| <= k and nums[2] == key, so 3 is a k-distant index.
- For index 4, |4 - 5| <= k and nums[5] == key, so 4 is a k-distant index.
- For index 5, |5 - 5| <= k and nums[5] == key, so 5 is a k-distant index.
- For index 6, |6 - 5| <= k and nums[5] == key, so 6 is a k-distant index.

Thus, we return [1,2,3,4,5,6] which is sorted in increasing order.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,2,2,2,2], key = 2, k = 2

  ### 📤 `Output`  ➤ [0,1,2,3,4]

  ### 🔦 `Explanation` ➤ For all indices i in nums, there exists some index j such that |i - j| <= k and nums[j] == key, so every index is a k-distant index.
Hence, we return [0,1,2,3,4].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>

🔹 1 <= nums[i] <= 1000 </br>

🔹 key is an integer from the array nums. </br>

🔹 1 <= k <= nums.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Two Pointers**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/24%20-%2006%20-%202025%20---%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/24%20-%2006%20-%202025%20---%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/24%20-%2006%20-%202025%20---%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/24%20-%2006%20-%202025%20---%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202200.%20Find%20All%20K-Distant%20Indices%20in%20an%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d3a4ae2c-8920-4fe8-8fd6-31a789e43989" width = "700px" height="462px" />

</h1>
