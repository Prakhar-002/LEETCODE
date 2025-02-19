# 1415. The k-th Lexicographical String of All Happy Strings of Length n

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/?envType=daily-question&envId=2025-02-19"><strong>➥ ☢️ 1415 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A happy string is a string that:

- consists only of letters of the set `['a', 'b', 'c']`.

- `s[i] != s[i + 1]` for all values of `i` from `1` to `s.length - 1` (string is 1-indexed).

### For example, strings `"abc"`, `"ac"`, `"b"` and `"abcbabcbcb"` are all happy strings and strings `"aa"`, `"baa"` and `"ababbc"` are not happy strings.

### Given two integers `n` and `k`, consider a list of all happy strings of length `n` sorted in lexicographical order.

### Return *the kth string of this list or return an empty string if there are less than `k` happy strings of length `n`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 1, k = 3

  ### 📤 `Output`  ➤ "c"

  ### 🔦 `Explanation`  ➤ The list ["a", "b", "c"] contains all happy strings of length 1. The third string is "c".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1, k = 4

  ### 📤 `Output`  ➤ ""

  ### 🔦 `Explanation` ➤ There are only 3 happy strings of length 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, k = 9

  ### 📤 `Output`  ➤ "cab"

  ### 🔦 `Explanation`  ➤ There are 12 different happy string of length 3 ["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]. You will find the 9th string = "cab"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 10`** </br>

🔹 **`1 <= k <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

