# 2914. Minimum Number of Changes to Make Binary String Beautiful

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/?envType=daily-question&envId=2024-11-05"><strong>➥ ☢️ 2914 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` binary string `s` having an even length.

### A string is `beautiful` if it's possible to partition it into one or more substrings such that:

- Each substring has an even length.

- Each substring contains only `1's` or only `0's`.

### You can change any character in `s` to `0` or `1`.

### Return *the `minimum` number of changes required to make the string `s` beautiful*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "1001"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ We change s[1] to 1 and s[3] to 0 to get string "1100".</br> It can be seen that the string "1100" is beautiful because we can partition it into "11|00".</br> It can be proven that 2 is the minimum number of changes needed to make the string beautiful.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "10"

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤  We change s[1] to 1 to get string "11".</br> It can be seen that the string "11" is beautiful because we can partition it into "11".</br> It can be proven that 1 is the minimum number of changes needed to make the string beautiful.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "0000"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤  We don't need to make any changes as the string "0000" is beautiful already.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= s.length <= 10<sup>5</sup>** </br>

🔹 **`s` has an even length.** </br>

🔹 **`s[i]` is either `'0'` or `'1'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/05%20-%2011%20-%202024%20---%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautiful%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautif.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/05%20-%2011%20-%202024%20---%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautiful%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautiful.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/05%20-%2011%20-%202024%20---%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautiful%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautif.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/05%20-%2011%20-%202024%20---%202914.%20Minimum%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautiful%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202914.%20Min%20Number%20of%20Changes%20to%20Make%20Binary%20String%20Beautif.js) |
