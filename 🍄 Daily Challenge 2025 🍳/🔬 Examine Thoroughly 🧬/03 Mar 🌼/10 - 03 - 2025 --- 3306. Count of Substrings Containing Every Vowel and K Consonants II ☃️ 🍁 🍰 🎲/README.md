# 3306. Count of Substrings Containing Every Vowel and K Consonants II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description/?envType=daily-question&envId=2025-03-10"><strong>➥ ☢️ 3306 Leetcode Medium ☢️ </strong></a>
</h2>

</br>


# Description 📜 ˋ°•*⁀➷

### You are given a **string** `word` and a **non-negative integer** `k`.  

- A substring is **valid** if it:
  1. Contains **every vowel** (`'a', 'e', 'i', 'o', 'u'`) **at least once**.
  2. Has **exactly k consonants**.

### **Return** the total number of valid substrings of `word`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"aeioqq"`, k = `1`

  ### 📤 `Output` ➤ 0

  ### 🔦 `Explanation` ➤ 
- There is **no** substring that contains **every vowel**.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"aeiou"`, k = `0`

  ### 📤 `Output` ➤ 1

  ### 🔦 `Explanation` ➤ 
- The **only valid substring** is `"aeiou"`, which:
  - Contains **every vowel**.
  - Has **0 consonants**.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = `"ieaouqqieaouqq"`, k = `1`

  ### 📤 `Output` ➤ 3

  ### 🔦 `Explanation` ➤ 

- The **three valid substrings** are:

  - `"ieaouq"` ➤ `word[0..5]`
  - `"qieaou"` ➤ `word[6..11]`
  - `"ieaouq"` ➤ `word[7..12]`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `5 <= word.length <= 2 * 10⁵` </br>
🔹 `word` consists only of **lowercase English letters**. </br>
🔹 `0 <= k <= word.length - 5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/10%20-%2003%20-%202025%20---%203306.%20Count%20of%20Substrings%20Containing%20Every%20Vowel%20and%20K%20Consonants%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203306.%20Count%20of%20Substrings%20Containing.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/10%20-%2003%20-%202025%20---%203306.%20Count%20of%20Substrings%20Containing%20Every%20Vowel%20and%20K%20Consonants%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203306.%20Count%20of%20Substrings%20Containing%20E.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/10%20-%2003%20-%202025%20---%203306.%20Count%20of%20Substrings%20Containing%20Every%20Vowel%20and%20K%20Consonants%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203306.%20Count%20of%20Substrings%20Containing.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/10%20-%2003%20-%202025%20---%203306.%20Count%20of%20Substrings%20Containing%20Every%20Vowel%20and%20K%20Consonants%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203306.%20Count%20of%20Substrings%20Contai.js) |
