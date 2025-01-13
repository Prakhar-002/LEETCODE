# 3223. Minimum Length of String After Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-length-of-string-after-operations/description/?envType=daily-question&envId=2025-01-13"><strong>➥ ☢️ 3223 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s`.

### You can perform the following process on `s` any number of times:

- Choose an index `i` in the string such that there is at least one character to the left of index `i` that is equal to `s[i]`, and at least one character to the right that is also equal to `s[i]`.

- Delete the closest character to the left of index `i` that is equal to `s[i]`.

- Delete the closest character to the right of index `i` that is equal to `s[i]`.

### Return *the minimum length of the final string `s` that you can achieve*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  s = "abaacbcbb"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ We do the following operations:

- Choose index 3, then remove the characters at indices 0 and 5. The resulting string is `s = "acbcb"`.

- Choose index 2, then remove the characters at indices 0 and 3. The resulting string is `s = "bacbcbb"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  s = "aa"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ We cannot perform any operations, so we return the length of the original string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 2 * 10<sup>5</sup>** </br>

🔹 **s consists only of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/13%20-%2001%20-%202025%20---%20%203223.%20Minimum%20Length%20of%20String%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203223.%20Minimum%20Length%20of%20String%20After%20Operations.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/13%20-%2001%20-%202025%20---%20%203223.%20Minimum%20Length%20of%20String%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203223.%20Minimum%20Length%20of%20String%20After%20Operations.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/13%20-%2001%20-%202025%20---%20%203223.%20Minimum%20Length%20of%20String%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203223.%20Minimum%20Length%20of%20String%20After%20Operations.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/13%20-%2001%20-%202025%20---%20%203223.%20Minimum%20Length%20of%20String%20After%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203223.%20Minimum%20Length%20of%20String%20After%20Operations.js) |
