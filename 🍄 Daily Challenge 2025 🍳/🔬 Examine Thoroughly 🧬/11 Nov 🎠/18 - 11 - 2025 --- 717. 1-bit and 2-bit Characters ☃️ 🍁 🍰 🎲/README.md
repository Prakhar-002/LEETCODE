# 717. 1-bit and 2-bit Characters

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/1-bit-and-2-bit-characters/description/?envType=daily-question&envId=2025-11-18"><strong>➥ ♻️ 717 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### We have two special characters:

- The first character can be represented by one bit `0`.

- The second character can be represented by two bits `(10 or 11)`.

### Given a binary array `bits` that ends with `0`, return `true` if the last character must be a one-bit character.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ bits = [1,0,0]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The only way to decode it is two-bit character and one-bit character. So the last character is one-bit character.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ bits = [1,1,1,0]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ The only way to decode it is two-bit character and two-bit character. So the last character is not one-bit character.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= bits.length <= 1000 </br>
🔹 bits[i] is either 0 or 1. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/18%20-%2011%20-%202025%20---%20717.%201-bit%20and%202-bit%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20717.%201-bit%20and%202-bit%20Characters.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/18%20-%2011%20-%202025%20---%20717.%201-bit%20and%202-bit%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20717.%201-bit%20and%202-bit%20Characters.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/18%20-%2011%20-%202025%20---%20717.%201-bit%20and%202-bit%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20717.%201-bit%20and%202-bit%20Characters.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/18%20-%2011%20-%202025%20---%20717.%201-bit%20and%202-bit%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20717.%201-bit%20and%202-bit%20Characters.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/42e20069-d2a2-4314-841c-5589f1e767f4" width = "700px" height="462px" />

</h1>
