# 2396. Strictly Palindromic Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/strictly-palindromic-number/description/"><strong>➥ ☢️ 2396 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An integer `n` is `strictly palindromic` if, for `every` base `b` between `2` and `n - 2` `(inclusive)`, the string representation of the integer `n` in base `b` is `palindromic`.

### Given an integer `n`, return *`true` if `n` is `strictly palindromic` and `false` otherwise*.

### A string is `palindromic` if it reads the same forward and backward.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ n = 9 

  ### Output  ➤ false

  ### Explanation ➤ In base 2: 9 = 1001 (base 2), which is palindromic. </br> In base 3: 9 = 100 (base 3), which is not palindromic. </br> Therefore, 9 is not strictly palindromic so we return false. </br> Note that in bases 4, 5, 6, and 7, n = 9 is also not palindromic.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input  ➤ n = 4

  ### Output  ➤ false

  ### Explanation ➤ We only consider base 2: 4 = 100 (base 2), which is not palindromic. </br> Therefore, we return false.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **4 <= n <= 10^5**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Two Pointers**
3. **Brainteaser**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%202396.%20Strictly%20Palindromic%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_2396_StrictlyPalindromicNumber.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%202396.%20Strictly%20Palindromic%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_2396_StrictlyPalindromicNumber.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%202396.%20Strictly%20Palindromic%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_2396_StrictlyPalindromicNumber.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%202396.%20Strictly%20Palindromic%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_2396_StrictlyPalindromicNumber.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%202396.%20Strictly%20Palindromic%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_2396_StrictlyPalindromicNumber.c)  |
