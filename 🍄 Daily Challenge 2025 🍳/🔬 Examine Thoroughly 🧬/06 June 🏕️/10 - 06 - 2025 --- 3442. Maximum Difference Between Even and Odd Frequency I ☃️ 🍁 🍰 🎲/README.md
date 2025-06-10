# 3442. Maximum Difference Between Even and Odd Frequency I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/?envType=daily-question&envId=2025-06-10"><strong>➥ ♻️ 3442 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` containing only lowercase English letters.

Your task is to find the maximum difference `diff = a1 - a2` between the frequency of two characters, `a1` and `a2`, within the string `s`, subject to the following constraints:

1. The character `a1` must have an *odd* frequency in the string.
2. The character `a2` must have an *even* frequency in the string.

Return the maximum possible value of this difference `diff`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "aaaaabbc"

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The character 'a' has an odd frequency of 5, and 'b' has an even frequency of 2. </br> The maximum difference is 5 - 2 = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "abcabcab"

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The character 'a' has an odd frequency of 3, and 'c' has an even frequency of 2. </br> The maximum difference is 3 - 2 = 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= s.length <= 100 </br>

🔹 s consists only of lowercase English letters. </br>

🔹 s contains at least one character with an odd frequency and one with an even frequency. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/10%20-%2006%20-%202025%20---%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/10%20-%2006%20-%202025%20---%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20F.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/10%20-%2006%20-%202025%20---%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/10%20-%2006%20-%202025%20---%203442.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203442.%20Maximum%20Difference%20Between%20Even%20and.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/eb8d8d01-b5c2-4a07-bc6d-32f6d233e8ed" width = "700px" height="462px" />

</h1>
