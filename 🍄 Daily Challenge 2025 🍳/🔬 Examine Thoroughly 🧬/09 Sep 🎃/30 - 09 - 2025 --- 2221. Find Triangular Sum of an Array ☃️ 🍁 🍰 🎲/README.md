# 2221. Find Triangular Sum of an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-triangular-sum-of-an-array/?envType=daily-question&envId=2025-09-30"><strong>➥ ☢️ 2221 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, where each `nums[i]` is a digit between 0 and 9 (inclusive).

### The *triangular sum* of `nums` is defined as the value of the sole remaining element in `nums` after the following process terminates:

1. If `nums` contains only one element (n == 1), the process ends.
2. Otherwise, construct a new 0-indexed integer array `newNums` of length `n - 1`.
3. For each index `i` (where `0 <= i < n - 1`), calculate `newNums[i]` as `(nums[i] + nums[i+1]) % 10`. In other words, each element in `newNums` is the modulo 10 sum of two consecutive elements in `nums`.
4. Replace the array `nums` with `newNums`.
5. Repeat the entire process from step 1.

### Your task is to return the triangular sum of `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ nums = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤
The above diagram depicts the process from which we obtain the triangular sum of the array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ Since there is only one element in nums, the triangular sum is the value of that element itself.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>

🔹 0 <= nums[i] <= 9 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Math**  </br>

🔸 **Simulation**  </br>

🔸 **Combinatorics**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/29%20-%2009%20-%202025%20---%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201039.%20Minimum%20Score%20Triangulation%20of%20Polygon.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1ffc51dc-291a-4e2e-bd2e-0d8bdf91ba21" width = "700px" height="462px" />

</h1>
