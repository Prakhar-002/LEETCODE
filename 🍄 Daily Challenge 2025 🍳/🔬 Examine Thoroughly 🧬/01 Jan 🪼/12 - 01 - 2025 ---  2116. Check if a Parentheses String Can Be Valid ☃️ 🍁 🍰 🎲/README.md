# 2116. Check if a Parentheses String Can Be Valid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/description/?envType=daily-question&envId=2025-01-12"><strong>➥ ☢️ 2116 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A parentheses string is a `non-empty` string consisting only of `'('` and `')'`. It is valid if `any` of the following conditions is `true`:

- It is ().

- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid parentheses strings.

- It can be written as `(A)`, where `A` is a valid parentheses string.

### You are given a parentheses string `s` and a string locked, both of length `n`. `locked` is a binary string consisting only of `'0'`s and `'1'`s. For each index `i` of `locked`,

- If `locked[i]` is `'1'`, you cannot change `s[i]`.

- But if `locked[i]` is `'0'`, you can change `s[i]` to either `'('` or `')'`.

### Return `true` *if you can make* `s` *a valid parentheses string*. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "))()))", locked = "010100"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤  locked[1] == '1' and locked[3] == '1', so we cannot change s[1] or s[3].</br> We change s[0] and s[4] to '(' while leaving s[2] and s[5] unchanged to make s valid.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "()()", locked = "0000"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ We do not need to make any changes because s is already valid.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  s = ")", locked = "0"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ locked permits us to change s[0]. </br> Changing s[0] to either '(' or ')' will not make s valid.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == s.length == locked.length`** </br>

🔹 **1 <= n <= 105** </br>

🔹 **`s[i]` is either `'('` or `')'`.** </br>

🔹 **`locked[i]` is either `'0'` or `'1'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
