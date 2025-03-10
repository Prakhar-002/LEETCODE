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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |


