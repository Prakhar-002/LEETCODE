# 2185. Counting Words With a Given Prefix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/counting-words-with-a-given-prefix/description/?envType=daily-question&envId=2025-01-09"><strong>➥ ♻️ 2185 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of strings `words` and a string `pref`.

### Return *the number of strings in* `words` *that contain* `pref` *as a prefix*.

### A `prefix` of a string `s` is any leading contiguous substring of `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ words = ["pay","<ins>`at`</ins>tention","practice","<ins>`at`</ins>tend"], `pref` = "at"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The 2 strings that contain "at" as a prefix are: "<ins>`at`</ins>tention" and "<ins>`at`</ins>tend".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["leetcode","win","loops","success"], pref = "code"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ There are no strings that contain "code" as a prefix.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= words.length <= 100`** </br>

🔹 **`1 <= words[i].length, pref.length <= 100`** </br>

🔹 **`words[i]` and `pref` consist of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **String Matching**  </br>

</br>

# Similar Question with Prakhar-002 🎭 ˋ°•*⁀➷

### 💎 [3045. Count Prefix and Suffix Pairs II]()

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/09%20-%2001%20-%202025%20---%20%202185.%20Counting%20Words%20With%20a%20Given%20Prefix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202185.%20Counting%20Words%20With%20a%20Given%20Prefix.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/09%20-%2001%20-%202025%20---%20%202185.%20Counting%20Words%20With%20a%20Given%20Prefix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202185.%20Counting%20Words%20With%20a%20Given%20Prefix.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/09%20-%2001%20-%202025%20---%20%202185.%20Counting%20Words%20With%20a%20Given%20Prefix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202185.%20Counting%20Words%20With%20a%20Given%20Prefix.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/09%20-%2001%20-%202025%20---%20%202185.%20Counting%20Words%20With%20a%20Given%20Prefix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202185.%20Counting%20Words%20With%20a%20Given%20Prefix.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/09%20-%2001%20-%202025%20---%20%202185.%20Counting%20Words%20With%20a%20Given%20Prefix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202185.%20Counting%20Words%20With%20a%20Given%20Prefix.c)  |
