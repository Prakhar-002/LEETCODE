# Q2. Restore IP Addresses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/restore-ip-addresses/description/?envType=problem-list-v2&envId=dsa-recursion-maze-backtracking"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A valid IP address consists of exactly four integers separated by single dots. Each integer is between `0` and `255` (inclusive) and cannot have leading zeros.

### For example, `"0.1.2.201"` and `"192.168.1.1"` are valid IP addresses, but `"0.011.255.245"`, `"192.168.1.312"` and `"192.168@1.1"` are invalid IP addresses.

### Given a string `s` containing only digits, return all possible valid IP addresses that can be formed by inserting dots into `s`. You are not allowed to reorder or remove any digits in `s`. You may return the valid IP addresses in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "25525511135"

  ### 📤 `Output`  ➤ ["255.255.11.135","255.255.111.35"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "0000"

  ### 📤 `Output`  ➤ ["0.0.0.0"]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "101023"

  ### 📤 `Output`  ➤ ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 20 </br>
🔹 s consists of digits only. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Backtracking** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Backtracking/Q2.%20Restore%20IP%20Addresses/%F0%9F%8D%81JAVA%20-%20Restore%20IP%20Addresses.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Backtracking/Q2.%20Restore%20IP%20Addresses/%F0%9F%8E%B2CPP%20-%20Restore%20IP%20Addresses.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Backtracking/Q2.%20Restore%20IP%20Addresses/%F0%9F%8D%B0PYTHON%20-%20Restore%20IP%20Addresses.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Backtracking/Q2.%20Restore%20IP%20Addresses/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Restore%20IP%20Addresses.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fd60c3c1-136c-40cf-98b4-bb2eb752ff94" width = "700px" height="462px" />

</h1>
