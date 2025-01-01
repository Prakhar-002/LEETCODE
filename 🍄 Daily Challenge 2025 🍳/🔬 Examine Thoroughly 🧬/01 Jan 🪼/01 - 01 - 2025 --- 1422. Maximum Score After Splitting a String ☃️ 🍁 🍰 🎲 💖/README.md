# 1422. Maximum Score After Splitting a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/?envType=daily-question&envId=2025-01-01"><strong>➥ ☢️ 1422 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` of zeros and ones, return *the maximum score after splitting the string into two `non-empty` substrings* (i.e. `left` substring and `right` substring).

### The score after splitting a string is the number of `zeros` in the `left` substring plus the number of `ones` in the `right` substring.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "011101"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ All possible ways of splitting s into two non-empty substrings are:

➺ left = "0" and right = "11101", score = 1 + 4 = 5 
➺ left = "01" and right = "1101", score = 1 + 3 = 4 
➺ left = "011" and right = "101", score = 1 + 2 = 3 
➺ left = "0111" and right = "01", score = 1 + 1 = 2 
➺ left = "01110" and right = "1", score = 2 + 1 = 3

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "00111"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "1111"

  ### 📤 `Output`  ➤ 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= s.length <= 500`** </br>

🔹 **The string `s` consists of characters `'0'` and `'1'` only.** </br>

🔹 **** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
