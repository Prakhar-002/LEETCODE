# 2749. Minimum Operations to Make the Integer Zero

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-the-integer-zero/description/?envType=daily-question&envId=2025-09-05"><strong>➥ ☢️ 2479 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers num1 and num2.

### In one operation, you can choose integer i in the range [0, 60] and subtract 2^i + num2 from num1.

### Return the integer denoting the minimum number of operations needed to make num1 equal to 0.

### If it is impossible to make num1 equal to 0, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `num1 = 3, num2 = -2`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺

  - We choose i = 2 and subtract 2^2 + (-2) from 3, 3 - (4 + (-2)) = 1.
  
  - We choose i = 2 and subtract 2^2 + (-2) from 1, 1 - (4 + (-2)) = -1.
  
  - We choose i = 0 and subtract 2^0 + (-2) from -1, (-1) - (1 + (-2)) = 0.
  
  ### It can be proven, that 3 is the minimum number of operations that we need to perform.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num1 = 5, num2 = 7`

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤
  
  ### It can be proven, that it is impossible to make 5 equal to 0 with the given operation.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num1 = 10, num2 = 0`

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ 

  - We choose i = 3 and subtract 2^3 + (0) from 10, 10 - (8 + (0)) = 2
  - We choose i = 1 and subtract 2^1 + (0) from 2, 2 - (2 + (0)) = 0

  ### It can be proven, that 2 is the minimum number of operations that we need to perform with choosing minimum positive path that reduce amount 0 . Therefore , if it require negative number the solution is less

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= num1 <= 10^9` </br>

🔹 `-10^9 <= num2 <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Bit Manipulation** </br>
🔸 **Brainteaser** </br>
🔸 **Enumeration** </br>

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

<img src ="https://github.com/user-attachments/assets/fc75fac3-6bc1-4df6-bafb-432e4572fb3e" width = "700px" height="462px" />

</h1>
