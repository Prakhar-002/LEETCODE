# 2337. Move Pieces to Obtain a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/?envType=daily-question&envId=2024-12-05"><strong>➥ ☢️ 2337 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings start and target, both of length n. Each string consists only of the characters `'L'`, `'R'`, and `'_'` where:

- The characters `'L'` and `'R'` represent pieces, where a piece `'L'` can move to the `left` only if there is a `blank` space directly to its left, and a piece `'R'` can move to the `right` only if there is a `blank` space directly to its right.

- The character `'_'` represents a blank space that can be occupied by `any` of the `'L'` or `'R'` pieces.

### Return *`true` if it is possible to obtain the string `target` by moving the pieces of the string `start` any number of times*. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ start = "_L__R__R_", target = "L______RR"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ We can obtain the string target from start by doing the following moves:

    ➺ Move the first piece one step to the left, start becomes equal to "L___R__R_".
    ➺ Move the last piece one step to the right, start becomes equal to "L___R___R".
    ➺ Move the second piece three steps to the right, start becomes equal to "L______RR".
    Since it is possible to get the string target from start, we return true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ start = "R_L_", target = "__LR"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ The 'R' piece in the string start can move one step to the right to obtain "_RL_".</br> After that, no pieces can move anymore, so it is impossible to obtain the string target from start.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ start = "_R", target = "R_"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ The piece in the string start can move only to the right, so it is impossible to obtain the string target from start.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == start.length == target.length`** </br>

🔹 **1 <= n <= 105** </br>

🔹 **`start` and `target` consist of the characters `'L'`, `'R'`, and `'_'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/05%20-%2012%20-%202024%20---%202337.%20Move%20Pieces%20to%20Obtain%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202337.%20Move%20Pieces%20to%20Obtain%20a%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/05%20-%2012%20-%202024%20---%202337.%20Move%20Pieces%20to%20Obtain%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202337.%20Move%20Pieces%20to%20Obtain%20a%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/05%20-%2012%20-%202024%20---%202337.%20Move%20Pieces%20to%20Obtain%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202337.%20Move%20Pieces%20to%20Obtain%20a%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/05%20-%2012%20-%202024%20---%202337.%20Move%20Pieces%20to%20Obtain%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202337.%20Move%20Pieces%20to%20Obtain%20a%20String.js) |
