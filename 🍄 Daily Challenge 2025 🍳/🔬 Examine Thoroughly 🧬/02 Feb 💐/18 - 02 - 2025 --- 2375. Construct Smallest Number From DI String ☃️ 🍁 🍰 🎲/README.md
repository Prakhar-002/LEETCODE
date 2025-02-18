# 2375. Construct Smallest Number From DI String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-smallest-number-from-di-string/?envType=daily-question&envId=2025-02-18"><strong>➥ ☢️ 2375 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed string `pattern` of length `n` consisting of the characters `'I'` meaning increasing and `'D'` meaning decreasing.

### A 0-indexed string `num` of length `n + 1` is created using the following conditions:

- `num` consists of the digits `'1'` to `'9'`, where each digit is used at most once.

- If `pattern[i] == 'I'`, then `num[i] < num[i + 1]`.

- If `pattern[i] == 'D'`, then `num[i] > num[i + 1]`.

### Return *the lexicographically smallest possible string* `num` *that meets the conditions*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ pattern = "IIIDIDDD"

  ### 📤 `Output`  ➤ "123549876"

  ### 🔦 `Explanation`  ➤ At indices 0, 1, 2, and 4 we must have that num[i] < num[i+1].</br></br> At indices 3, 5, 6, and 7 we must have that num[i] > num[i+1].</br></br> Some possible values of num are "245639871", "135749862", and "123849765".</br></br> It can be proven that "123549876" is the smallest possible num that meets the conditions.</br></br> Note that "123414321" is not possible because the digit '1' is used more than once.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ pattern = "DDD"

  ### 📤 `Output`  ➤ "4321"

  ### 🔦 `Explanation` ➤ Some possible values of num are "9876", "7321", and "8742".</br></br> It can be proven that "4321" is the smallest possible num that meets the conditions.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= pattern.length <= 8`** </br>

🔹 **`pattern` consists of only the letters `'I'` and `'D'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Backtracking**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
