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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
