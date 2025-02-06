# 1726. Tuple with Same Product

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/tuple-with-same-product/description/?envType=daily-question&envId=2025-02-06"><strong>➥ ☢️ 1726 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array `nums` of distinct positive integers, return *the number of tuples* `(a, b, c, d)` *such that* `a * b = c * d` *where* `a`, `b`, `c`, and `d` *are elements of nums, and* `a != b != c != d`

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,3,4,6]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ There are 8 valid tuples:</br> (2,6,3,4) , (2,6,4,3) , (6,2,3,4) , (6,2,4,3)</br> (3,4,2,6) , (4,3,2,6) , (3,4,6,2) , (4,3,6,2)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,2,4,5,10]

  ### 📤 `Output`  ➤ 16

  ### 🔦 `Explanation` ➤ There are 16 valid tuples:</br> (1,10,2,5) , (1,10,5,2) , (10,1,2,5) , (10,1,5,2)</br> (2,5,1,10) , (2,5,10,1) , (5,2,1,10) , (5,2,10,1)</br> (2,10,4,5) , (2,10,5,4) , (10,2,4,5) , (10,2,5,4)</br> (4,5,2,10) , (4,5,10,2) , (5,4,2,10) , (5,4,10,2)

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 1000`** </br>

🔹 **1 <= nums[i] <= 10<sup>4</sup>** </br>

🔹 **All elements in `nums` are distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/06%20-%2002%20-%202025%20---%201726.%20Tuple%20with%20Same%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201726.%20Tuple%20with%20Same%20Product.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/06%20-%2002%20-%202025%20---%201726.%20Tuple%20with%20Same%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201726.%20Tuple%20with%20Same%20Product.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/06%20-%2002%20-%202025%20---%201726.%20Tuple%20with%20Same%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201726.%20Tuple%20with%20Same%20Product.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/06%20-%2002%20-%202025%20---%201726.%20Tuple%20with%20Same%20Product%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201726.%20Tuple%20with%20Same%20Product.js) |