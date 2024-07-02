# 728. Self Dividing Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/self-dividing-numbers/description/"><strong>➥ ♻️ 1438 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `self-dividing number` is a number that is divisible by every digit it contains.

- For example, `128` is a self-dividing number because `128 % 1 == 0`, `128 % 2 == 0`, and `128 % 8 == 0`.

- A `self-dividing number` is not allowed to contain the digit zero.

### Given two integers `left` and `right`, return *a list of all the self-dividing numbers in the range `[left, right]`*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ left = 1, right = 22

  ### 📤 Output  ➤ [1,2,3,4,5,6,7,8,9,11,12,15,22]


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ left = 47, right = 85

  ### 📤 Output  ➤ [48,55,66,77]



</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= left <= right <= 10^4** </br>


</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20344.%20Reverse%20String%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%92%96/%F0%9F%8D%81JAVA_344._ReverseString.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20344.%20Reverse%20String%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_344._ReverseString.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20344.%20Reverse%20String%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_344._ReverseString.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20344.%20Reverse%20String%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%92%96/%F0%9F%92%96C_344._ReverseString.c)  |
