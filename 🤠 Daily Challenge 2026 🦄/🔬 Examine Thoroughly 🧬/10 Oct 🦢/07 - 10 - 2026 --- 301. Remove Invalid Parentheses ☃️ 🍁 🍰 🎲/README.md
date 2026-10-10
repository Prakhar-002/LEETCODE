# 301. Remove Invalid Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-invalid-parentheses/description/?envType=daily-question&envId=2026-10-07"><strong>➥ ☢️ 301 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

### Return a list of unique strings that are valid with the minimum number of removals. You may return the answer in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `s = "()())()"`

  ### 📤 `Output`  ➤ `["(())()","()()()"]`

  ### 🔦 `Explanation`  ➤ ➺ Removing the closing parenthesis at index 4 gives `"()()()"`, while removing the closing parenthesis at index 1 gives `"(())()"`. Both are valid with only 1 removal.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "(a)())()"`

  ### 📤 `Output`  ➤ `["(a())()","(a)()()"]`

  ### 🔦 `Explanation` ➤ ➺ Removing the extra `')'` produces two valid options: `"(a())()"` and `"(a)()()"`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = ")("`

  ### 📤 `Output`  ➤ `[""]`

  ### 🔦 `Explanation`  ➤ ➺ Both parentheses are invalid and must be removed, leaving an empty string `""`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 25`** </br>

🔹 **`s` consists of lowercase English letters and parentheses `'('` and `')'`.** </br>

🔹 **There will be at most 20 parentheses in `s`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Backtracking** </br>
🔸 **Breadth-First Search** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
