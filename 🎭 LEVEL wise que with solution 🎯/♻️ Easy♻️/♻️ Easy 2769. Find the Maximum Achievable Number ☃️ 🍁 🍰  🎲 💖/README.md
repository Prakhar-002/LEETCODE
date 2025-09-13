# 2769. Find the Maximum Achievable Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-maximum-achievable-number/description/"><strong>➥ ♻️ 2769 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two integers, num and t. A number x is achievable if it can become equal to num after applying the following operation at most t times:

- Increase or decrease x by 1, and simultaneously increase or decrease num by 1.

### Return the maximum possible value of x.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `num = 4, t = 1`

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ ➺

  - Apply the following operation once to make the maximum achievable number equal to num: Decrease the maximum achievable number by 1, and increase num by 1. So. 4,4 where  Decreesed by one one time  then total is . where maximum posible output is to return total,

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = 3, t = 2`

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤
  
  - Apply the following operation twice to make the maximum achievable number equal to num: Decrease the maximum achievable number by 1, and increase num by 1. and The two number will get be plus to y to be solution

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = 3 t= 1 `

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ total - 3,1 is . the to perform the, max 3 +

2*time it it 5

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= num, t <= 50` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202769.%20Find%20the%20Maximum%20Achievable%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202769.%20Find%20the%20Maximum%20Achievable%20Number.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202769.%20Find%20the%20Maximum%20Achievable%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202769.%20Find%20the%20Maximum%20Achievable%20Number.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202769.%20Find%20the%20Maximum%20Achievable%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202769.%20Find%20the%20Maximum%20Achievable%20Number.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202769.%20Find%20the%20Maximum%20Achievable%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202769.%20Find%20the%20Maximum%20Achievable%20Number.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202769.%20Find%20the%20Maximum%20Achievable%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202769.%20Find%20the%20Maximum%20Achievable%20Number.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f52e8e60-b237-4c33-804e-ce072bd65034" width = "700px" height="462px" />

</h1>
