# 2176. Count Equal and Divisible Pairs in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/?envType=daily-question&envId=2025-04-17"><strong>➥ ♻️ 2176 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of length `n`, and an integer `k`.  The goal is to find the number of pairs `(i, j)` that satisfy the following conditions:

1. `0 <= i < j < n` (i and j are valid indices and `i` is strictly less than `j`).
2. `nums[i] == nums[j]` (The elements at indices `i` and `j` are equal).
3. `(i * j)` is divisible by `k` (The product of the indices `i` and `j` is divisible by `k`).

### Your task is to return the total count of pairs that meet all the specified requirements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,1,2,2,2,1,3], k = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ There are 4 pairs that meet all the requirements:

- nums[0] == nums[6], and 0 \* 6 == 0, which is divisible by 2.
- nums[2] == nums[3], and 2 \* 3 == 6, which is divisible by 2.
- nums[2] == nums[4], and 2 \* 4 == 8, which is divisible by 2.
- nums[3] == nums[4], and 3 \* 4 == 12, which is divisible by 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,4], k = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ Since no value in nums is repeated, there are no pairs (i,j) that meet all the requirements.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 1, 1, 1], k = 3

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤All combination form two indices. which follows result that returns to count with number 3;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5, 5, 4, 4, 5, 5] k =5

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ Explanation is : indices values (5 to 5), pair from 0 = to number can split is this set. so if all of its have return total: to valid numbers

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 100 </br>
🔹 1 <= nums[i], k <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/17%20-%2004%20-%202025%20---%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/17%20-%2004%20-%202025%20---%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/17%20-%2004%20-%202025%20---%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/17%20-%2004%20-%202025%20---%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202176.%20Count%20Equal%20and%20Divisible%20Pairs%20in%20an%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
