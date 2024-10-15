# 2938. Separate Black and White Balls

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/separate-black-and-white-balls/description/?envType=daily-question&envId=2024-10-15"><strong>➥ ☢️ 2938 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` balls on a table, each ball has a color black or white.

### You are given a `0-indexed` binary string `s` of length `n`, where `1` and `0` represent black and white balls, respectively.

### In each step, you can choose two adjacent balls and swap them.

### Return *the `minimum` number of steps to group all the black balls to the right and all the white balls to the left*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "101"

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ We can group all the black balls to the right in the following way:

    ➺ Swap s[0] and s[1], s = "011".
    Initially, 1s are not grouped together, 
    requiring at least 1 step to group them to the right.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "100"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ We can group all the black balls to the right in the following way:

    ➺ Swap s[0] and s[1], s = "010".
    ➺ Swap s[1] and s[2], s = "001".
    It can be proven that the minimum number of steps needed is 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "0111"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤  All the black balls are already grouped to the right.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n == s.length <= 10<sup>5</sup>** </br>

🔹 **`s[i]` is either `'0'` or `'1'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/15%20-%2010%20-%202024%20---%202938.%20Separate%20Black%20and%20White%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202938.%20Separate%20Black%20and%20White%20Balls.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/15%20-%2010%20-%202024%20---%202938.%20Separate%20Black%20and%20White%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202938.%20Separate%20Black%20and%20White%20Balls.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/15%20-%2010%20-%202024%20---%202938.%20Separate%20Black%20and%20White%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202938.%20Separate%20Black%20and%20White%20Balls.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/15%20-%2010%20-%202024%20---%202938.%20Separate%20Black%20and%20White%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202938.%20Separate%20Black%20and%20White%20Balls.js) |


