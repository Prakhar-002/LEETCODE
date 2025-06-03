# 135. Candy

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/candy/description/?envType=daily-question&envId=2025-06-02"><strong>➥ 🫀 135 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` children standing in a line. Each child is assigned a rating value, represented in the integer array `ratings`.

You are distributing candies to these children, subject to the following requirements:

1. Every child must receive at least one candy.

2. Children with a higher rating must receive more candies than their immediate neighbors (adjacent children in the line).

Your task is to return the *minimum* number of candies you need to distribute to all the children while satisfying these conditions.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ratings = [1,0,2]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ ratings = [1,2,2]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ You can allocate to the first, second and third child with 1, 2, 1 candies respectively. The third child gets 1 candy because it satisfies the above two conditions.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == ratings.length </br>

🔹 1 <= n <= 2 * 10<sup>4</sup> </br>

🔹 0 <= ratings[i] <= 2 * 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/02%20-%2006%20-%202025%20---%20135.%20Candy%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20135.%20Candy.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/02%20-%2006%20-%202025%20---%20135.%20Candy%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20135.%20Candy.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/02%20-%2006%20-%202025%20---%20135.%20Candy%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20135.%20Candy.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/02%20-%2006%20-%202025%20---%20135.%20Candy%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20135.%20Candy.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/02%20-%2006%20-%202025%20---%20135.%20Candy%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20135.%20Candy.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7772c99a-fde8-4128-9f1e-d8eddc144ef8" width = "700px" height="462px" />

</h1>
