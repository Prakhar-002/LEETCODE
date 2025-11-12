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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
