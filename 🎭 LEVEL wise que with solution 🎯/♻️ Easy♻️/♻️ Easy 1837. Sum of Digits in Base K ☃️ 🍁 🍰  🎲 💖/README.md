# 1837. Sum of Digits in Base K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-digits-in-base-k/description/"><strong>➥ ♻️ 1837 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` (represented in base 10) and an integer `k`, which represents a target base.  Your task is to:

1. Convert the integer `n` from base 10 to base `k`.

2. Calculate the sum of the digits of the converted number (where each digit is interpreted as a base 10 number).

3. Return the sum in base 10.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 34, k = 6

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤ 34 (base 10) expressed in base 6 is 54. 5 + 4 = 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 10, k = 10

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ n is already in base 10. 1 + 0 = 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 42, k = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 42 in base 2 becomes 101010.  1 + 0 + 1 + 0 + 1 + 0 = 3.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 15, k = 4
   
  ### 📤 `Output`  ➤ 8
  
  ### 🔦 `Explanation`  ➤After convert integer 15 to  base 4 as integer number, they count number which equal to be 4 is `33 =3*4 +3  The  sum all 2 digits = 3 + 3 becomes integer result '8'

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 100 </br>
🔹 2 <= k <= 10 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201837.%20Sum%20of%20Digits%20in%20Base%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201837.%20Sum%20of%20Digits%20in%20Base%20K.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201837.%20Sum%20of%20Digits%20in%20Base%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201837.%20Sum%20of%20Digits%20in%20Base%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201837.%20Sum%20of%20Digits%20in%20Base%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201837.%20Sum%20of%20Digits%20in%20Base%20K.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201837.%20Sum%20of%20Digits%20in%20Base%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201837.%20Sum%20of%20Digits%20in%20Base%20K.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201837.%20Sum%20of%20Digits%20in%20Base%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201837.%20Sum%20of%20Digits%20in%20Base%20K.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/93c7555c-2d5e-41ce-bc8f-45f7f0cf3d75" width = "700px" height="462px" />

</h1>
