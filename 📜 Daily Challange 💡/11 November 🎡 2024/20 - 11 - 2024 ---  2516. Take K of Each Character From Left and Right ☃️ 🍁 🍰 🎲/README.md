# 2516. Take K of Each Character From Left and Right

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/description/?envType=daily-question&envId=2024-11-20"><strong>➥ ☢️ 2516 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string s consisting of the characters 'a', 'b', and 'c' and a non-negative integer k. Each minute, you may take either the leftmost character of s, or the rightmost character of s.

### Return *the `minimum` number of minutes needed for you to take at least `k` of each character, or return `-1` if it is not possible to take `k` of each character*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  s = "aabaaaacaabc", k = 2

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ ➺Take three characters from the left of s. You now have two 'a' characters, and one 'b' character.</br> Take five characters from the right of s. You now have four 'a' characters, two 'b' characters, and two 'c' characters.</br> A total of 3 + 5 = 8 minutes is needed.</br> It can be proven that 8 is the minimum number of minutes needed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  s = "a", k = 1

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ It is not possible to take one 'b' or 'c' so return -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists of only the letters `'a'`, `'b'`, and `'c'`.** </br>

🔹 **`0 <= k <= s.length`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/20%20-%2011%20-%202024%20---%20%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/20%20-%2011%20-%202024%20---%20%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/20%20-%2011%20-%202024%20---%20%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/20%20-%2011%20-%202024%20---%20%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202516.%20Take%20K%20of%20Each%20Character%20From%20Left%20and%20Right.js) |

