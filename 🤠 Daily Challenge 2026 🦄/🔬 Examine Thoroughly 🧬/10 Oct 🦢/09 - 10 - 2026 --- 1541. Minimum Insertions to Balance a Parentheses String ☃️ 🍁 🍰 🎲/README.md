# 1541. Minimum Insertions to Balance a Parentheses String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/description/?envType=daily-question&envId=2026-10-09"><strong>➥ ☢️ 1541 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a parentheses string `s` containing only the characters `'('` and `')'`. A parentheses string is balanced if:
- Any left parenthesis `'('` must have a corresponding two consecutive right parenthesis `'))'`.
- Left parenthesis `'('` must go before the corresponding two consecutive right parenthesis `'))'`.

### In other words, we treat `'('` as an opening parenthesis and `'))'` as a closing parenthesis.
- For example, `"())"`, `"())(())))"` and `"(())())))"` are balanced, `")()"`, `"()))"` and `"(()))"` are not balanced.

### You can insert the characters `'('` and `')'` at any position of the string to balance it if needed. Return the minimum number of insertions needed to make `s` balanced.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `s = "(()))"`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺ The second `'('` has two matching `'))'`, but the first `'('` has only `')'` matching. We need to add one more `')'` at the end of the string to be `"(())))"` which is balanced.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "())"`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation` ➤ ➺ The string is already balanced.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "))())("`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺ Add `'('` to match the first `'))'`, and add `'))'` to match the last `'('`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 10^5`** </br>

🔹 **`s` consists of `'('` and `')'` only.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Stack** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/09%20-%2010%20-%202026%20---%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parentheses%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parenthese.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/09%20-%2010%20-%202026%20---%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parentheses%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parentheses%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/09%20-%2010%20-%202026%20---%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parentheses%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parenthese.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/09%20-%2010%20-%202026%20---%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parentheses%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201541.%20Minimum%20Insertions%20to%20Balance%20a%20Parent.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/solutions/8564824/leetcode-daily-grind-java-c-python-javas-g1no) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0bacee29-0f3e-4f31-bb58-d935bd4163c6" width = "700px" height="462px" />

</h1>
