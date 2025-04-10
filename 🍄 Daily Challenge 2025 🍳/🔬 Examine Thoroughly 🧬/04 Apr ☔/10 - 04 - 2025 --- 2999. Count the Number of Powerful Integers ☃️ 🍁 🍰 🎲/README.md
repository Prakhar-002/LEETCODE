# 2999. Count the Number of Powerful Integers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-powerful-integers/description/?envType=daily-question&envId=2025-04-10"><strong>➥ 🫀 2999 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given three integers: `start`, `finish`, and `limit`. You are also given a 0-indexed string `s` representing a positive integer.

### A positive integer `x` is called *powerful* if it satisfies two conditions:

1. `x` ends with `s` (in other words, `s` is a suffix of `x`).

2. Each digit in `x` is at most `limit`.

### Your task is to return the total number of powerful integers within the inclusive range [`start`..`finish`].

### Note: A string `x` is a suffix of a string `y` if and only if `x` is a substring of `y` that starts from some index (including 0) in `y` and extends to the index `y.length - 1`. For example, "25" is a suffix of "5125" whereas "512" is not.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ start = 1, finish = 6000, limit = 4, s = "124"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤  </br></br>The powerful integers in the range [1..6000] are 124, 1124, 2124, 3124, and, 4124. All these integers have each digit <= 4, and "124" as a suffix. Note that 5124 is not a powerful integer because the first digit is 5 which is greater than 4. </br></br>It can be shown that there are only 5 powerful integers in this range.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ start = 15, finish = 215, limit = 6, s = "10"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤</br></br> The powerful integers in the range [15..215] are 110 and 210. All these integers have each digit <= 6, and "10" as a suffix.</br></br> It can be shown that there are only 2 powerful integers in this range.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ start = 1000, finish = 2000, limit = 4, s = "3000"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ All integers in the range [1000..2000] are smaller than 3000, hence "3000" cannot be a suffix of any integer in this range.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ start = 5000, finish = 7000, limit = 6, s = "8"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ due to all number is range 's'(suffix)' value not contain therefore number became "0". as we require more of iteration number equal each value with return value

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= start <= finish <= 10<sup>15</sup> </br>
🔹 1 <= limit <= 9 </br>
🔹 1 <= s.length <= floor(log10(finish)) + 1 </br>
🔹 s only consists of numeric digits which are at most limit. </br>
🔹 s does not have leading zeros. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/10%20-%2004%20-%202025%20---%202999.%20Count%20the%20Number%20of%20Powerful%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202999.%20Count%20the%20Number%20of%20Powerful%20Integers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/10%20-%2004%20-%202025%20---%202999.%20Count%20the%20Number%20of%20Powerful%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202999.%20Count%20the%20Number%20of%20Powerful%20Integers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/10%20-%2004%20-%202025%20---%202999.%20Count%20the%20Number%20of%20Powerful%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202999.%20Count%20the%20Number%20of%20Powerful%20Integers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/10%20-%2004%20-%202025%20---%202999.%20Count%20the%20Number%20of%20Powerful%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202999.%20Count%20the%20Number%20of%20Powerful%20Integers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b0be3cbb-bbc8-4c37-8b25-7d1d8097cbd4" width = "700px" height="462px" />

</h1>
