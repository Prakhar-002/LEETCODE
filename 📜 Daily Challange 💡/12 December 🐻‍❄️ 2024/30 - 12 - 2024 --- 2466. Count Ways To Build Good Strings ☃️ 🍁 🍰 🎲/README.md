# 2466. Count Ways To Build Good Strings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-ways-to-build-good-strings/description/?envType=daily-question&envId=2024-12-30"><strong>➥ ☢️ 2466 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the integers `zero`, `one`, `low`, and `high`, we can construct a string by starting with an empty string, and then at each step perform either of the following:

- Append the character `'0'` `zero` times.
- Append the character `'1'` `one` times.

### This can be performed any number of times.

### A good string is a string constructed by the above process having a `length` between `low` and `high` (inclusive).

### Return *the number of `different` good strings that can be constructed satisfying these properties. Since the answer can be large*, return it modulo 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ low = 3, high = 3, zero = 1, one = 1

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ ➺One possible valid good string is "011". </br> It can be constructed as follows: "" -> "0" -> "01" -> "011". </br> All binary strings from "000" to "111" are good strings in this example.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ low = 2, high = 3, zero = 1, one = 2

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ The good strings are "00", "11", "000", "110", and "011".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= low <= high <= 10<sup>5</sup>** </br>

🔹 **`1 <= zero, one <= low`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

