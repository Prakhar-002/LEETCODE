# 165. Compare Version Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/compare-version-numbers/description/?envType=daily-question&envId=2025-09-23"><strong>➥ ☢️ 165 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two version strings, `version1` and `version2`, compare them. A version string consists of revisions separated by dots '.'. The value of the revision is its integer conversion ignoring leading zeros.

### To compare version strings, compare their revision values in left-to-right order. If one of the version strings has fewer revisions, treat the missing revision values as 0.

### Return the following:

- If `version1` < `version2`, return -1.
- If `version1` > `version2`, return 1.
- Otherwise, return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `version1 = "1.2", version2 = "1.10"`

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ ➺

  - `version1`'s second revision is "2" and `version2`'s second revision is "10": 2 < 10, so `version1` < `version2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `version1 = "1.01", version2 = "1.001"`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ ➺

  - Ignoring leading zeroes, both "01" and "001" represent the same integer "1".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `version1 = "1.0", version2 = "1.0.0.0"`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ ➺

  - `version1` has less revisions, which means every missing revision are treated as "0".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= version1.length, version2.length <= 500` </br>
🔹 `version1` and `version2` only contain digits and '.'. </br>
🔹 `version1` and `version2` are valid version numbers. </br>
🔹 All the given revisions in `version1` and `version2` can be stored in a 32-bit integer. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/23%20-%2009%20-%202025%20---%20165.%20Compare%20Version%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20165.%20Compare%20Version%20Numbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/23%20-%2009%20-%202025%20---%20165.%20Compare%20Version%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20165.%20Compare%20Version%20Numbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/23%20-%2009%20-%202025%20---%20165.%20Compare%20Version%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20165.%20Compare%20Version%20Numbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/23%20-%2009%20-%202025%20---%20165.%20Compare%20Version%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20165.%20Compare%20Version%20Numbers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/69799f35-946f-4bfa-a98d-571318ae0399" width = "700px" height="462px" />

</h1>
