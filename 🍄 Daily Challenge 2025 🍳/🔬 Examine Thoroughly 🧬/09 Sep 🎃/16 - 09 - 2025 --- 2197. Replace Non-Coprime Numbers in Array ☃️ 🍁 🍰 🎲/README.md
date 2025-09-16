# 2197. Replace Non-Coprime Numbers in Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/replace-non-coprime-numbers-in-array/description/?envType=daily-question&envId=2025-09-16"><strong>➥ 🫀 2197 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers nums. Perform the following steps:

1. Find any two adjacent numbers in nums that are non-coprime.

2. If no such numbers are found, stop the process.

3. Otherwise, delete the two numbers and replace them with their LCM (Least Common Multiple).

4. Repeat this process as long as you keep finding two adjacent non-coprime numbers.

### Return *the final modified array*. It can be shown that replacing adjacent non-coprime numbers in any arbitrary order will lead to the same result.

### The test cases are generated such that the values in the final array are less than or equal to 108.

### Two values `x` and `y` are non-coprime if `GCD(x, y) > 1` where `GCD(x, y)` is the Greatest Common Divisor of `x` and `y`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [6,4,3,2,7,6,2]`

  ### 📤 `Output`  ➤ [12,7,6]

  ### 🔦 `Explanation`  ➤ ➺

  - (6, 4) are non-coprime with LCM(6, 4) = 12. Now, nums = [12,3,2,7,6,2].

  - (12, 3) are non-coprime with LCM(12, 3) = 12. Now, nums = [12,2,7,6,2].

  - (12, 2) are non-coprime with LCM(12, 2) = 12. Now, nums = [12,7,6,2].

  - (6, 2) are non-coprime with LCM(6, 2) = 6. Now, nums = [12,7,6].

  ### There are no more adjacent non-coprime numbers in nums. Thus, the final modified array is [12,7,6]. Note that there are other ways to obtain the same resultant array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [2,2,1,1,3,3,3]`

  ### 📤 `Output`  ➤ [2,1,1,3]

  ### 🔦 `Explanation` ➤

- (3, 3) are non-coprime with LCM(3, 3) = 3. Now, nums = [2,2,1,1,3,3].
- (3, 3) are non-coprime with LCM(3, 3) = 3. Now, nums = [2,2,1,1,3].
- (2, 2) are non-coprime with LCM(2, 2) = 2. Now, nums = [2,1,1,3].

### There are no more adjacent non-coprime numbers in nums.
### Thus, the final modified array is [2,1,1,3].
### Note that there are other ways to obtain the same resultant array.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 10^5` </br>

🔹 `1 <= nums[i] <= 10^5` </br>

🔹 The test cases are generated such that the values in the final array are less than or equal to 10^8. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Stack** </br>
🔸 **Number Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/16%20-%2009%20-%202025%20---%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/16%20-%2009%20-%202025%20---%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/16%20-%2009%20-%202025%20---%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/16%20-%2009%20-%202025%20---%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202197.%20Replace%20Non-Coprime%20Numbers%20in%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d8951557-718f-4c4d-a24d-0d2848dc7c8d" width = "700px" height="462px" />

</h1>
