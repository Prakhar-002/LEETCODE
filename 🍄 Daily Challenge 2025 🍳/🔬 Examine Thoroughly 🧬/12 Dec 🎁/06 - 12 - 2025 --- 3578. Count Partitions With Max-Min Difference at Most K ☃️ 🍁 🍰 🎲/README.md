# 3578. Count Partitions With Max-Min Difference at Most K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-partitions-with-max-min-difference-at-most-k/description/?envType=daily-question&envId=2025-12-06"><strong>➥ ☢️ 3578 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`. Your task is to partition `nums` into one or more non-empty contiguous segments such that in each segment, the difference between its maximum and minimum elements is at most `k`.

### Return the total number of ways to partition `nums` under this condition.

### Since the answer may be too large, return it modulo `10^9 + 7`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [9,4,1,3,7], k = 4

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ There are 6 valid partitions where the difference between the maximum and minimum elements in each segment is at most `k = 4`:

- [[9], [4], [1], [3], [7]]
- [[9], [4], [1], [3, 7]]
- [[9], [4], [1, 3], [7]]
- [[9], [4, 1], [3], [7]]
- [[9], [4, 1], [3, 7]]
- [[9], [4, 1, 3], [7]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [3,3,4], k = 0

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ There are 2 valid partitions that satisfy the given conditions:

- [[3], [3], [4]]
- [[3, 3], [4]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 5 * 10^4** </br>

🔹 **1 <= nums[i] <= 10^9** </br>

🔹 **0 <= k <= 10^9** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Queue**  </br>
🔸 **Sliding Window**  </br>
🔸 **Prefix Sum**  </br>
🔸 **Monotonic Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/06%20-%2012%20-%202025%20---%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20at%20Most%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20a.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/06%20-%2012%20-%202025%20---%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20at%20Most%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20at%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/06%20-%2012%20-%202025%20---%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20at%20Most%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20a.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/06%20-%2012%20-%202025%20---%203578.%20Count%20Partitions%20With%20Max-Min%20Difference%20at%20Most%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203578.%20Count%20Partitions%20With%20Max-Min%20Differen.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4e08e150-b110-48d5-bc51-99e953b2e2f8" width = "700px" height="462px" />

</h1>
