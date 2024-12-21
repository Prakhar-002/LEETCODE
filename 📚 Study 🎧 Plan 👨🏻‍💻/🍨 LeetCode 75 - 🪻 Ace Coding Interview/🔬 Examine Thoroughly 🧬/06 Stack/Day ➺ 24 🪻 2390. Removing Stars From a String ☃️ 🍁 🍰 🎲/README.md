# 2390. Removing Stars From a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/removing-stars-from-a-string/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2390 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string s, which contains stars *.

### In one operation, you can:

- Choose a star in s.

- Remove the closest non-star character to its left, as well as remove the star itself.

### Return the string after all stars have been removed.

### Note:

- The input will be generated such that the operation is always possible.

- It can be shown that the resulting string will always be unique.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "leet**cod*e"

  ### 📤 `Output`  ➤ "lecoe"

  ### 🔦 `Explanation`  ➤ Performing the removals from left to right:

➺ The closest character to the 1st star is 't' in "leet**cod*e". s becomes "lee*cod*e".

➺ The closest character to the 2nd star is 'e' in "lee*cod*e". s becomes "lecod*e".

➺ The closest character to the 3rd star is 'd' in "lecod*e". s becomes "lecoe".
There are no more stars, so we return "lecoe".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "erase*****"

  ### 📤 `Output`  ➤ ""

  ### 🔦 `Explanation` ➤ The entire string is removed, so we return an empty string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` consists of lowercase English letters and stars `*`.** </br>

🔹 **The operation above can be performed on `s`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Stack/Day%20%E2%9E%BA%2024%20%F0%9F%AA%BB%202390.%20Removing%20Stars%20From%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202390.%20Removing%20Stars%20From%20a%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Stack/Day%20%E2%9E%BA%2024%20%F0%9F%AA%BB%202390.%20Removing%20Stars%20From%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202390.%20Removing%20Stars%20From%20a%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Stack/Day%20%E2%9E%BA%2024%20%F0%9F%AA%BB%202390.%20Removing%20Stars%20From%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202390.%20Removing%20Stars%20From%20a%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Stack/Day%20%E2%9E%BA%2024%20%F0%9F%AA%BB%202390.%20Removing%20Stars%20From%20a%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202390.%20Removing%20Stars%20From%20a%20String.js) |
