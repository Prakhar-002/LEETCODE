# 2654. Minimum Number of Operations to Make All Array Elements Equal to 1

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/description/?envType=daily-question&envId=2025-11-12"><strong>➥ ☢️ 2654 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array `nums` consisting of positive integers. You can do the following operation on the array any number of times:

- Select an index `i` such that `0 <= i < n - 1` and replace either of `nums[i]` or `nums[i+1]` with their `gcd` value.

### Return the minimum number of operations to make all elements of `nums` equal to 1. If it is impossible, return -1.

### The `gcd` of two integers is the greatest common divisor of the two integers.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [2,6,3,4]`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - We can do the following operations:
    - Choose index `i = 2` and replace `nums[2]` with `gcd(3,4) = 1`. Now we have `nums = [2,6,1,4]`.
    - Choose index `i = 1` and replace `nums[1]` with `gcd(6,1) = 1`. Now we have `nums = [2,1,1,4]`.
    - Choose index `i = 0` and replace `nums[0]` with `gcd(2,1) = 1`. Now we have `nums = [1,1,1,4]`.
    - Choose index `i = 2` and replace `nums[3]` with `gcd(1,4) = 1`. Now we have `nums = [1,1,1,1]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [2,10,6,14]`

  ### 📤 `Output`  ➤ `-1`

  ### 🔦 `Explanation`  ➤ ➺

  - It can be shown that it is impossible to make all the elements equal to 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= nums.length <= 50` </br>
🔹 `1 <= nums[i] <= 10^6` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Number Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/12%20-%2011%20-%202025%20---%202654.%20Minimum%20Number%20of%20Operations%20to%20Make%20All%20Array%20Elements%20Equal%20to%201%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202654.%20Minimum%20Number%20of%20Operatio.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/12%20-%2011%20-%202025%20---%202654.%20Minimum%20Number%20of%20Operations%20to%20Make%20All%20Array%20Elements%20Equal%20to%201%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202654.%20Minimum%20Number%20of%20Operations.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/12%20-%2011%20-%202025%20---%202654.%20Minimum%20Number%20of%20Operations%20to%20Make%20All%20Array%20Elements%20Equal%20to%201%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202654.%20Minimum%20Number%20of%20Operatio.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/12%20-%2011%20-%202025%20---%202654.%20Minimum%20Number%20of%20Operations%20to%20Make%20All%20Array%20Elements%20Equal%20to%201%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202654.%20Minimum%20Number%20of%20Oper.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1f50d79e-dda9-453e-923a-65abdf95ae62" width = "700px" height="462px" />

</h1>
