# 1910. Remove All Occurrences of a Substring

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/?envType=daily-question&envId=2025-02-11"><strong>➥ ☢️ 1910 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two strings `s` and `part`, perform the following operation on `s` until all occurrences of the substring `part` are removed:

- Find the leftmost occurrence of the substring `part` and remove it from `s`.

### Return `s` *after removing all occurrences of* `part`.

### A `substring` is a contiguous sequence of characters in a string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  s = "daabcbaabcbc", part = "abc"

  ### 📤 `Output`  ➤ "dab"

  ### 🔦 `Explanation`  ➤ The following operations are done:</br> </br> ➺ s = "da<ins>abc<ins/>baabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".</br> </br> ➺ s = "daba<ins>abc<ins/>bc", remove "abc" starting at index 4, so s = "dababc".</br> </br> ➺ s = "dab<ins>abc<ins/>", remove "abc" starting at index 3, so s = "dab". </br> </br> Now s has no occurrences of "abc".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "axxxxyyyyb", part = "xy"

  ### 📤 `Output`  ➤ "ab"

  ### 🔦 `Explanation` ➤ The following operations are done:</br> </br> ➺ s = "axxx<ins>xy<ins/>yyyb", remove "xy" starting at index 4 so s = "axxyyb".</br> </br> ➺ s = "axx<ins>xy<ins/>yyb", remove "xy" starting at index 3 so s = "axxyyb".</br> </br> ➺ s = "ax<ins>xy<ins/>yb", remove "xy" starting at index 2 so s = "axyb".</br> </br> ➺ s = "a<ins>xy<ins/>b", remove "xy" starting at index 1 so s = "ab".</br> </br> Now s has no occurrences of "xy".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 1000`** </br>

🔹 **`1 <= part.length <= 1000`** </br>

🔹 **`s`​​​​​​ and part consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/11%20-%2002%20-%202025%20---%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/11%20-%2002%20-%202025%20---%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/11%20-%2002%20-%202025%20---%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/11%20-%2002%20-%202025%20---%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201910.%20Remove%20All%20Occurrences%20of%20a%20Substring.js) |
