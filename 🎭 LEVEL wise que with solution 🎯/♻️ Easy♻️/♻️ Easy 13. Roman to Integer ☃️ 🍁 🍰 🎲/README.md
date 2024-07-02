# 13. Roman to Integer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/roman-to-integer/description/"><strong>➥ ♻️ 13 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, D` and `M`.

    Symbol       Value
    I             1
    V             5
    X             10
    L             50
    C             100
    D             500
    M             1000

### For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as XXVII, which is `XX + V + II`.

### Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9. 

- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90. 

- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

### Given a roman numeral, convert it to an integer.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ s = "III"

  ### 📤 Output  ➤  3

  ### 🔦 Explanation  ➤ III = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  s = "LVIII"

  ### 📤 Output  ➤  58

  ### 🔦 Explanation ➤ L = 50, V= 5, III = 3.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  s = "MCMXCIV"

  ### 📤 Output  ➤ 1994

  ### 🔦 Explanation  ➤ M = 1000, CM = 900, XC = 90 and IV = 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 15** </br>
🔹 **`s` contains only the characters `('I', 'V', 'X', 'L', 'C', 'D', 'M')`.** </br>
🔹 **It is `guaranteed` that `s` is a valid roman numeral in the range `[1, 3999]`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **String**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2013.%20Roman%20to%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-13-RomanToInteger.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2013.%20Roman%20to%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-13-RomanToInteger.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2013.%20Roman%20to%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-13-RomanToInteger.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2013.%20Roman%20to%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-13-RomanToInteger.js) |
