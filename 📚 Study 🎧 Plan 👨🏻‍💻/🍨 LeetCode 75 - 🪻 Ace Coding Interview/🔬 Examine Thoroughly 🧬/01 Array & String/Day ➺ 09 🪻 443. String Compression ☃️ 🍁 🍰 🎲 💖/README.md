# 443. String Compression

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/string-compression/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 443 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of characters `chars`, compress it using the following algorithm:

### Begin with an empty string `s`. For each group of consecutive repeating characters in `chars`:

- If the group's length is `1`, append the character to `s`.

- Otherwise, append the character followed by the group's length.

### The compressed string `s` should not be returned separately, but instead, be stored in the input character array `chars`. Note that group lengths that are `10` or longer will be split into multiple characters in `chars`.

### After you are done `modifying the input array`, return the new length of the array.

### You *must write an algorithm that uses only constant extra space*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ chars = ["a","a","b","b","c","c","c"]

  ### 📤 `Output`  ➤ Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

  ### 🔦 `Explanation`  ➤ The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ chars = ["a"]

  ### 📤 `Output`  ➤ Return 1, and the first character of the input array should be: ["a"]

  ### 🔦 `Explanation` ➤ The only group is "a", which remains uncompressed since it's a single character.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]

  ### 📤 `Output`  ➤ Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].

  ### 🔦 `Explanation`  ➤ The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= chars.length <= 2000`** </br>

🔹 **`chars[i]` is a lowercase English letter, uppercase English letter, digit, or symbol.** </br>

🔹 **** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2009%20%F0%9F%AA%BB%20443.%20String%20Compression%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20443.%20String%20Compression.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2009%20%F0%9F%AA%BB%20443.%20String%20Compression%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20443.%20String%20Compression.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2009%20%F0%9F%AA%BB%20443.%20String%20Compression%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20443.%20String%20Compression.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2009%20%F0%9F%AA%BB%20443.%20String%20Compression%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20443.%20String%20Compression.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2009%20%F0%9F%AA%BB%20443.%20String%20Compression%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20443.%20String%20Compression.c)  |
