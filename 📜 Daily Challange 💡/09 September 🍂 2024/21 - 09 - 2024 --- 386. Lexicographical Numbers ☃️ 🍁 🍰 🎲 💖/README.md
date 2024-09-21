# 386. Lexicographical Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lexicographical-numbers/description/?envType=daily-question&envId=2024-09-21"><strong>➥ ☢️ 386 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer `n`, return all the numbers in the range `[1, n]` sorted in lexicographical order.

### You must write an algorithm that runs in `O(n)` time and uses `O(1)` extra space. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 13

  ### 📤 `Output`  ➤ [1,10,11,12,13,2,3,4,5,6,7,8,9]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2

  ### 📤 `Output`  ➤ [1,2]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 20

  ### 📤 `Output`  ➤ [1,10,11,12,13,14,15,16,17,18,19,2,20,3,4,5,6,7,8,9]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n <= 5 * 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Trie**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/21%20-%2009%20-%202024%20---%20386.%20Lexicographical%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20386.%20Lexicographical%20Numbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/21%20-%2009%20-%202024%20---%20386.%20Lexicographical%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20386.%20Lexicographical%20Numbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/21%20-%2009%20-%202024%20---%20386.%20Lexicographical%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20386.%20Lexicographical%20Numbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/21%20-%2009%20-%202024%20---%20386.%20Lexicographical%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20386.%20Lexicographical%20Numbers.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/21%20-%2009%20-%202024%20---%20386.%20Lexicographical%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20386.%20Lexicographical%20Numbers.c)  |
