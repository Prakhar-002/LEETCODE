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

  ### 🔦 `Explanation`  ➤ The following operations are done:</br> ➺ s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".</br> ➺ s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".</br> ➺ s = "dababc", remove "abc" starting at index 3, so s = "dab". </br> Now s has no occurrences of "abc".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "axxxxyyyyb", part = "xy"

  ### 📤 `Output`  ➤ "ab"

  ### 🔦 `Explanation` ➤ The following operations are done:</br> ➺ s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".</br> ➺ s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".</br> ➺ s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".</br> ➺ s = "axyb", remove "xy" starting at index 1 so s = "ab".</br> Now s has no occurrences of "xy".

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
