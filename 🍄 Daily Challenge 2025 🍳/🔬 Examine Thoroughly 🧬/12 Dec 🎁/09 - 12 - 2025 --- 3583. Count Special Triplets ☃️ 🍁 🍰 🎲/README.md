# 3583. Count Special Triplets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-special-triplets/description/?envType=daily-question&envId=2025-12-09"><strong>➥ ☢️ 3583 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. A **special triplet** is defined as a triplet of indices `(i, j, k)` such that:

- `0 <= i < j < k < n`, where `n = nums.length`
- `nums[i] == nums[j] * 2`
- `nums[k] == nums[j] * 2`

### Return the total number of **special triplets** in the array. Since the answer may be large, return it **modulo** `10^9 + 7`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `nums = [6,3,6]`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation`  ➤ The only special triplet is `(i, j, k) = (0, 1, 2)`, where 

- `nums[0] = 6, nums[1] = 3, nums[2] = 6`
- `nums[0] = nums[1] * 2 = 3 * 2 = 6`
- `nums[2] = nums[1] * 2 = 3 * 2 = 6`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `nums = [0,1,0,0]` 

### 📤 `Output`  ➤ `1` 

### 🔦 `Explanation` ➤ The only special triplet is `(i, j, k) = (0, 2, 3)`, where:

- `nums[0] = 0, nums[2] = 0, nums[3] = 0`
- `nums[0] = nums[2] * 2 = 0 * 2 = 0`
- `nums[3] = nums[2] * 2 = 0 * 2 = 0`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `nums = [8,4,2,8,4]` 

### 📤 `Output`  ➤ `2` 

### 🔦 `Explanation` ➤ There are exactly two special triplets:

- `(i, j, k) = (0, 1, 3)`
  - `nums[0] = 8, nums[1] = 4, nums[3] = 8 `
  - `nums[0] = nums[1] * 2 = 4 * 2 = 8 `
  - `nums[3] = nums[1] * 2 = 4 * 2 = 8 `
- `(i, j, k) = (1, 2, 4)`
  - `nums[1] = 4, nums[2] = 2, nums[4] = 4`
  - `nums[1] = nums[2] * 2 = 2 * 2 = 4`
  - `nums[4] = nums[2] * 2 = 2 * 2 = 4`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= n == nums.length <= 10^5` </br>   
🔹 `0 <= nums[i] <= 10^5` </br> 

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>   
🔸 **Hash Table** </br>
🔸 **Counting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/09%20-%2012%20-%202025%20---%203583.%20Count%20Special%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203583.%20Count%20Special%20Triplets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/09%20-%2012%20-%202025%20---%203583.%20Count%20Special%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203583.%20Count%20Special%20Triplets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/09%20-%2012%20-%202025%20---%203583.%20Count%20Special%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203583.%20Count%20Special%20Triplets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/09%20-%2012%20-%202025%20---%203583.%20Count%20Special%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203583.%20Count%20Special%20Triplets.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b37c494e-c498-4bd7-84b4-5e60c3dcb7b1" width = "700px" height="462px" />

</h1>
