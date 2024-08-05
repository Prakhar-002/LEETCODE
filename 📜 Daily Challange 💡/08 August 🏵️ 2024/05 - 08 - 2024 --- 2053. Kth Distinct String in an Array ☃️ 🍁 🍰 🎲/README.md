# 2053. Kth Distinct String in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kth-distinct-string-in-an-array/description/?envType=daily-question&envId=2024-08-05"><strong>➥ ♻️ 2053 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `distinct string` is a string that is present only `once` in an array.

### Given an array of strings `arr`, and an integer `k`, return *the `k-th` `distinct string` present in `arr`*. If there are `fewer` than k distinct strings, return *an `empty string` `""`*.

### Note that the strings are considered in the `order in which they appear` in the array.

 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = ["d","b","c","b","c","a"], k = 2

  ### 📤 `Output`  ➤ "a"

  ### 🔦 `Explanation`  ➤ 

    The only distinct strings in arr are "d" and "a".
    
    "d" appears 1st, so it is the 1st distinct string.
    
    "a" appears 2nd, so it is the 2nd distinct string.
    
    Since k == 2, "a" is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = ["aaa","aa","a"], k = 1

  ### 📤 `Output`  ➤ "aaa"

  ### 🔦 `Explanation` ➤ All strings in arr are distinct, so the 1st string "aaa" is returned.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = ["a","b","a"], k = 3

  ### 📤 `Output`  ➤ ""

  ### 🔦 `Explanation`  ➤ The only distinct string is "b". Since there are fewer than 3 distinct strings, we return an empty string "".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= k <= arr.length <= 1000`** </br>

🔹 **`1 <= arr[i].length <= 5`** </br>

🔹 **`arr[i]` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Counting**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/05%20-%2008%20-%202024%20---%202053.%20Kth%20Distinct%20String%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2053-KthDistinctStringInAnArray.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/05%20-%2008%20-%202024%20---%202053.%20Kth%20Distinct%20String%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2053-KthDistinctStringInAnArray.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/05%20-%2008%20-%202024%20---%202053.%20Kth%20Distinct%20String%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2053-KthDistinctStringInAnArray.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/05%20-%2008%20-%202024%20---%202053.%20Kth%20Distinct%20String%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2053-KthDistinctStringInAnArray.js) |
