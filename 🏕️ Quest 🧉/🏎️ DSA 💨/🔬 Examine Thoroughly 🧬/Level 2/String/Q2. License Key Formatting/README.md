# Q2. License Key Formatting

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/license-key-formatting/description/?envType=problem-list-v2&envId=dsa-sequence-valley-string"><strong>➥ ♻️ Q2 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a license key represented as a string `s` that consists of only alphanumeric characters and dashes. The string is separated into n + 1 groups by n dashes. You are also given an integer `k`.

### We want to reformat the string `s` such that each group contains exactly `k` characters, except for the first group, which could be shorter than `k` but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.

### Return the reformatted license key.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "5F3Z-2e-9-w", k = 4

  ### 📤 `Output`  ➤ "5F3Z-2E9W"

  ### 🔦 `Explanation`  ➤ The string s has been split into two parts, each part has 4 characters. Note that the two extra dashes are not needed and can be removed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "2-5g-3-J", k = 2

  ### 📤 `Output`  ➤ "2-5G-3J"

  ### 🔦 `Explanation` ➤ The string s has been split into three parts, each part has 2 characters except the first part as it could be shorter as mentioned above.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 10<sup>5</sup> </br>
🔹 s consists of English letters, digits, and dashes '-'. </br>
🔹 1 <= k <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/String/Q2.%20License%20Key%20Formatting/%F0%9F%8D%81JAVA%20-%20License%20Key%20Formatting.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/String/Q2.%20License%20Key%20Formatting/%F0%9F%8E%B2CPP%20-%20License%20Key%20Formatting.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/String/Q2.%20License%20Key%20Formatting/%F0%9F%8D%B0PYTHON%20-%20License%20Key%20Formatting.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/String/Q2.%20License%20Key%20Formatting/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20License%20Key%20Formatting.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8e9ae0ca-eab9-4502-825a-3e9438c4a77a" width = "700px" height="462px" />

</h1>
