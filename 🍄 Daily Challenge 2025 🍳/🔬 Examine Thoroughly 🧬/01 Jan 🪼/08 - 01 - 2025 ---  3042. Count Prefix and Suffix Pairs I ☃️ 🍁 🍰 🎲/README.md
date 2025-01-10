# 3042. Count Prefix and Suffix Pairs I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description/?envType=daily-question&envId=2025-01-08"><strong>➥ ♻️ 3042 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` string array `words`.

### Let's define a `boolean` function `isPrefixAndSuffix` that takes two strings, `str1` and `str2`:

- `isPrefixAndSuffix(str1, str2)` returns `true` if `str1` is both a **prefix** and a **suffix** of `str2`, and `false` otherwise.

### For example, `isPrefixAndSuffix("aba", "ababa")` is `true` because `"aba"` is a `prefix` of `"ababa"` and also a `suffix`, but `isPrefixAndSuffix("abc", "abcd")` is `false`.

### Return *an integer denoting the number of index pairs* `(i, j)` *such that* `i < j`, *and* `isPrefixAndSuffix(words[i], words[j])` *is* `true`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  words = ["a","aba","ababa","aa"]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ In this example, the counted index pairs are:</br>➺ i = 0 and j = 1 because isPrefixAndSuffix("a", "aba") is true.</br>➺ i = 0 and j = 2 because isPrefixAndSuffix("a", "ababa") is true.</br>➺ i = 0 and j = 3 because isPrefixAndSuffix("a", "aa") is true.</br>➺ i = 1 and j = 2 because isPrefixAndSuffix("aba", "ababa") is true.</br>➺ Therefore, the answer is 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["pa","papa","ma","mama"]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤  In this example, the counted index pairs are:</br>➺ i = 0 and j = 1 because isPrefixAndSuffix("pa", "papa") is true.</br>➺ i = 2 and j = 3 because isPrefixAndSuffix("ma", "mama") is true.</br>➺ Therefore, the answer is 2. 

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["abab","ab"]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ In this example, the only valid index pair is i = 0 and j = 1, and isPrefixAndSuffix("abab", "ab") is false.</br>➺ Therefore, the answer is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= words.length <= 50`** </br>

🔹 **`1 <= words[i].length <= 10`** </br>

🔹 **`words[i]` consists only of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Trie**  </br>
🔸 **Rolling Hash**  </br>
🔸 **String Matching**  </br>
🔸 **Hash Function**  </br>

</br>

# Similar Question with Prakhar-002 🎭 ˋ°•*⁀➷

### 💎 [3045. Count Prefix and Suffix Pairs II](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%203045.%20Count%20Prefix%20and%20Suffix%20Pairs%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2)

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/08%20-%2001%20-%202025%20---%20%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/08%20-%2001%20-%202025%20---%20%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/08%20-%2001%20-%202025%20---%20%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/08%20-%2001%20-%202025%20---%20%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203042.%20Count%20Prefix%20and%20Suffix%20Pairs%20I.js) |
