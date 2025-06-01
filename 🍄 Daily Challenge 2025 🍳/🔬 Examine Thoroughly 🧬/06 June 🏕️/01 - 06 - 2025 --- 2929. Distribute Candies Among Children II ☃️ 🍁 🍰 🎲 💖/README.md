# 2929. Distribute Candies Among Children II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/distribute-candies-among-children-ii/description/?envType=daily-question&envId=2025-06-01"><strong>➥ ☢️ 2929 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integers, `n` and `limit`. The task is to determine the number of ways to distribute `n` candies among 3 children, with the constraint that no child receives more than `limit` candies.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 5, limit = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ There are 3 ways to distribute 5 candies such that no child gets more than 2 candies: (1, 2, 2), (2, 1, 2) and (2, 2, 1).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, limit = 3

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ There are 10 ways to distribute 3 candies such that no child gets more than 3 candies: (0, 0, 3), (0, 1, 2), (0, 2, 1), (0, 3, 0), (1, 0, 2), (1, 1, 1), (1, 2, 0), (2, 0, 1), (2, 1, 0) and (3, 0, 0).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10<sup>6</sup> </br>

🔹 1 <= limit <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Combinatorics**  </br>
🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/01%20-%2006%20-%202025%20---%202929.%20Distribute%20Candies%20Among%20Children%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202929.%20Distribute%20Candies%20Among%20Children%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/01%20-%2006%20-%202025%20---%202929.%20Distribute%20Candies%20Among%20Children%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202929.%20Distribute%20Candies%20Among%20Children%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/01%20-%2006%20-%202025%20---%202929.%20Distribute%20Candies%20Among%20Children%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202929.%20Distribute%20Candies%20Among%20Children%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/01%20-%2006%20-%202025%20---%202929.%20Distribute%20Candies%20Among%20Children%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202929.%20Distribute%20Candies%20Among%20Children%20II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/01%20-%2006%20-%202025%20---%202929.%20Distribute%20Candies%20Among%20Children%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202929.%20Distribute%20Candies%20Among%20Children%20II.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
