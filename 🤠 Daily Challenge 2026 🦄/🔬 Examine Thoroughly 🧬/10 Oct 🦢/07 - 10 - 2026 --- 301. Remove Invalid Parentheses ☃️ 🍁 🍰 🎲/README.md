# 301. Remove Invalid Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-invalid-parentheses/description/?envType=daily-question&envId=2026-10-07"><strong>➥ 🫀 301 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

### Return a list of unique strings that are valid with the minimum number of removals. You may return the answer in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/07%20-%2010%20-%202026%20---%20301.%20Remove%20Invalid%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20301.%20Remove%20Invalid%20Parentheses.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/07%20-%2010%20-%202026%20---%20301.%20Remove%20Invalid%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20301.%20Remove%20Invalid%20Parentheses.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/07%20-%2010%20-%202026%20---%20301.%20Remove%20Invalid%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20301.%20Remove%20Invalid%20Parentheses.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/07%20-%2010%20-%202026%20---%20301.%20Remove%20Invalid%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20301.%20Remove%20Invalid%20Parentheses.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/remove-invalid-parentheses/solutions/8565266/leetcode-daily-grind-java-c-python-javas-37ga) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/66a024a5-dcb5-4b43-a41d-c18b65a8cb54" width = "700px" height="462px" />

</h1>
