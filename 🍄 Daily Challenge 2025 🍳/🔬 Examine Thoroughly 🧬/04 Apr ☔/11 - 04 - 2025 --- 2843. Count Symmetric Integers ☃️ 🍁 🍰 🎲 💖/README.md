# 2843. Count Symmetric Integers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-symmetric-integers/description/?envType=daily-question&envId=2025-04-11"><strong>➥ ♻️ 2843 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integers `low` and `high`.

### An integer `x` with `2 * n` digits is considered *symmetric* if the sum of its first `n` digits is equal to the sum of its last `n` digits.  Integers with an odd number of digits are never symmetric.

### Your task is to return the number of symmetric integers within the inclusive range [`low`, `high`].

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ low = 1, high = 100

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤ There are 9 symmetric integers between 1 and 100: 11, 22, 33, 44, 55, 66, 77, 88, and 99.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ low = 1200, high = 1230

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ There are 4 symmetric integers between 1200 and 1230: 1203, 1212, 1221, and 1230.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ low = 1000, high = 2000

  ### 📤 `Output`  ➤ 100

  ### 🔦 `Explanation`  ➤ Explanation between 1000 to 200 are most commen value and for each it iterate as 'n' per digit with that operation occur it gives '100

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ low = 1, high = 9
  
  ### 📤 `Output`  ➤ 0
  
  ### 🔦 `Explanation`  ➤  with range 1 to 9 it will returns 0 as digits number has range for symmtric operations in this examplt not exists at list
</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= low <= high <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Enumeration**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/11%20-%2004%20-%202025%20---%202843.%20Count%20Symmetric%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202843.%20Count%20Symmetric%20Integers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/11%20-%2004%20-%202025%20---%202843.%20Count%20Symmetric%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202843.%20Count%20Symmetric%20Integers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/11%20-%2004%20-%202025%20---%202843.%20Count%20Symmetric%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202843.%20Count%20Symmetric%20Integers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/11%20-%2004%20-%202025%20---%202843.%20Count%20Symmetric%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202843.%20Count%20Symmetric%20Integers.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/11%20-%2004%20-%202025%20---%202843.%20Count%20Symmetric%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202843.%20Count%20Symmetric%20Integers.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1db5ed0c-5e9a-4a1c-85d5-a6b88b1e208c" width = "700px" height="462px" />

</h1>
