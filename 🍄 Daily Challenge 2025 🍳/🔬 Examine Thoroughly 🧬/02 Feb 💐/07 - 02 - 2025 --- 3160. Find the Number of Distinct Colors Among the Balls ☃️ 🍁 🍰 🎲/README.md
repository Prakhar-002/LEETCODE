# 3160. Find the Number of Distinct Colors Among the Balls

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/?envType=daily-question&envId=2025-02-07"><strong>➥ ☢️ 3160 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `limit` and a 2D array `queries` of size `n x 2`.

### There are `limit + 1` balls with distinct labels in the range `[0, limit]`. Initially, all balls are uncolored. For every query in queries that is of the form `[x, y]`, you mark ball `x` with the color `y`. After each query, you need to find the number of distinct colors among the balls.

### Return an array `result` of length `n`, where `result[i]` denotes the number of distinct colors *after* i<sup>th</sup> query.

### Note that when answering a query, lack of a color will not be considered as a color.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ limit = 4, queries = [[1,4],[2,5],[1,3],[3,4]]

  ### 📤 `Output`  ➤  [1,2,2,3]

  ### 🔦 `Explanation`  ➤ 

![3160 que 1 expl](https://github.com/user-attachments/assets/597f60f3-c9fc-41c6-8f31-55c522518cdd)

- After query 0, ball 1 has color 4.

- After query 1, ball 1 has color 4, and ball 2 has color 5.

- After query 2, ball 1 has color 3, and ball 2 has color 5.

- After query 3, ball 1 has color 3, ball 2 has color 5, and ball 3 has color 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ limit = 4, queries = [[0,1],[1,2],[2,2],[3,4],[4,5]]

  ### 📤 `Output`  ➤ [1,2,2,3,4]

  ### 🔦 `Explanation` ➤ 

![3160 que 2 expl](https://github.com/user-attachments/assets/72566c12-ef24-4e4f-8ef5-4a97a95893c8)

- After query 0, ball 0 has color 1.

- After query 1, ball 0 has color 1, and ball 1 has color 2.

- After query 2, ball 0 has color 1, and balls 1 and 2 have color 2.

- After query 3, ball 0 has color 1, balls 1 and 2 have color 2, and ball 3 has color 4.

- After query 4, ball 0 has color 1, balls 1 and 2 have color 2, ball 3 has color 4, and ball 4 has color 5.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= limit <= 10<sup>9</sup>** </br>

🔹 **1 <= n == queries.length <= 10<sup>5</sup>** </br>

🔹 **`queries[i].length == 2`** </br>

🔹 **`0 <= queries[i][0] <= limit`** </br>

🔹 **1 <= queries[i][1] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/07%20-%2002%20-%202025%20---%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20the%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20t.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/07%20-%2002%20-%202025%20---%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20the%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20the.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/07%20-%2002%20-%202025%20---%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20the%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20t.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/07%20-%2002%20-%202025%20---%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Among%20the%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203160.%20Find%20the%20Number%20of%20Distinct%20Colors%20Amo.js) |

