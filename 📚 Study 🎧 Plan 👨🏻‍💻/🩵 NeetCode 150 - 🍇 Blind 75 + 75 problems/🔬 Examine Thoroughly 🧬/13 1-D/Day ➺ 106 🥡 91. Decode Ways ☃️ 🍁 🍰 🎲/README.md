# 91. Decode Ways

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/decode-ways/description/"><strong>➥ ☢️ 91 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have intercepted a secret message encoded as a string of numbers. The message is decoded via the following mapping:

### "1" -> 'A'

### "2" -> 'B'

### ...

### "25" -> 'Y'

### "26" -> 'Z'

### However, while decoding the message, you realize that there are many different ways you can decode the message because some codes are contained in other codes ("2" and "5" vs "25").

### For example, "11106" can be decoded into:

### "AAJF" with the grouping (1, 1, 10, 6)
### "KJF" with the grouping (11, 10, 6)
### The grouping (1, 11, 06) is invalid because "06" is not a valid code (only "6" is valid).
### Note: there may be strings that are impossible to decode.

### Given a string s containing only digits, return the number of ways to decode it. If the entire string cannot be decoded in any valid way, return 0.

### The test cases are generated so that the answer fits in a 32-bit integer.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "12"`

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ ➺ "12" could be decoded as "AB" (1 2) or "L" (12).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "226"`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `s = "06"`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06"). In this case, the string is not a valid encoding, so return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 100` </br>

🔹 `s` contains only digits and may contain leading zero(s). </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Dynamic Programming** </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
