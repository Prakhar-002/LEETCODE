# 1405. Longest Happy String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-happy-string/description/?envType=daily-question&envId=2024-10-16"><strong>➥ ☢️ 1405 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A string s is called happy if it satisfies the following conditions:

- `s` only contains the letters `'a'`, `'b'`, and `'c'`.
- `s` does not contain any of `"aaa"`, `"bbb"`, or `"ccc"` as a substring.
- `s` contains `at most` `a` occurrences of the letter `'a'`.
- `s` contains `at most` `b` occurrences of the letter `'b'`.
- `s` contains `at most` `c` occurrences of the letter `'c'`.

### Given three integers `a`, `b`, and `c`, return *the `longest possible happy` string. If there are multiple longest happy strings, return any of them*. If there is no such string, return *the empty string `""`*.

### A `substring` is a contiguous sequence of characters within a string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ a = 1, b = 1, c = 7

  ### 📤 `Output`  ➤ "ccaccbcc"

  ### 🔦 `Explanation`  ➤ "ccbccacc" would also be a correct answer.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  a = 7, b = 1, c = 0

  ### 📤 `Output`  ➤ "aabaa"

  ### 🔦 `Explanation` ➤ It is the only correct answer in this case.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ a = 2, b = 5, c = 9

  ### 📤 `Output`  ➤ "ccbccbccbbccaabc"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`0 <= a, b, c <= 100`** </br>

🔹 **`a + b + c > 0`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/16%20-%2010%20-%202024%20---%201405.%20Longest%20Happy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201405.%20Longest%20Happy%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/16%20-%2010%20-%202024%20---%201405.%20Longest%20Happy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201405.%20Longest%20Happy%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/16%20-%2010%20-%202024%20---%201405.%20Longest%20Happy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201405.%20Longest%20Happy%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/16%20-%2010%20-%202024%20---%201405.%20Longest%20Happy%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201405.%20Longest%20Happy%20String.js) |



