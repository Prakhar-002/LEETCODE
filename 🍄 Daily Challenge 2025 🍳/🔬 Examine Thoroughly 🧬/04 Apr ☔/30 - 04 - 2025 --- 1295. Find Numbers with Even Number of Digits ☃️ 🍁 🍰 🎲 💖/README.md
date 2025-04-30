# 1295. Find Numbers with Even Number of Digits

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/?envType=daily-question&envId=2025-04-30"><strong>➥ ♻️ 1295 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers called `nums`.  Your task is to determine how many of the integers in `nums` contain an even number of digits.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [12,345,2,6,7896]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤

- 12 contains 2 digits (even number of digits).
- 345 contains 3 digits (odd number of digits).
- 2 contains 1 digit (odd number of digits).
- 6 contains 1 digit (odd number of digits).
- 7896 contains 4 digits (even number of digits).

**Therefore only 12 and 7896 contain an even number of digits.**

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [555,901,482,1771]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ Only 1771 contains an even number of digits.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [22,34,66]

  ### 📤 `Output`  ➤ 3

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [3,33]

   ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 500 </br>

🔹 1 <= nums[i] <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/30%20-%2004%20-%202025%20---%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/30%20-%2004%20-%202025%20---%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/30%20-%2004%20-%202025%20---%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/30%20-%2004%20-%202025%20---%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/30%20-%2004%20-%202025%20---%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201295.%20Find%20Numbers%20with%20Even%20Number%20of%20Digits.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/630f100c-326a-4a11-a3f3-a635f417ed47" width = "700px" height="462px" />

</h1>
