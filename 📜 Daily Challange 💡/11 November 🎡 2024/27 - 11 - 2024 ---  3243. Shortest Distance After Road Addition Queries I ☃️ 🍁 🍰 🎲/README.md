# 3243. Shortest Distance After Road Addition Queries I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-distance-after-road-addition-queries-i/description/?envType=daily-question&envId=2024-11-27"><strong>➥ ☢️ 3243 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` and a 2D integer array `queries`.

### There are `n` cities numbered from `0` to `n - 1`. Initially, there is a `unidirectional` road from city `i` to city `i + 1` for all `0 <= i < n - 1`.

### queries[i] = [u<sub>i</sub>, v<sub>i</sub>] represents the addition of a new unidirectional road from city u<sub>i</sub> to city v<sub>i</sub>. After each query, you need to find the length of the shortest path from city `0` to city `n - 1`.

### Return an array `answer` where for each `i` in the range `[0, queries.length - 1]`, `answer[i]` is the *length of the shortest path from city* `0` to city `n - 1` after processing the first `i + 1` queries.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  n = 5, queries = [[2,4],[0,2],[0,4]]

  ### 📤 `Output`  ➤ [3,2,1]

  ### 🔦 `Explanation`  ➤ 

![3243 expl 1 1](https://github.com/user-attachments/assets/69ae6a09-fcb8-4af4-ad1c-242b6487a97a)

➺ After the addition of the road from 2 to 4, the length of the shortest path from 0 to 4 is 3.

![3243 expl 1 2](https://github.com/user-attachments/assets/b81c1fda-acf1-4d62-a413-43b5d2281fcb)

➺ After the addition of the road from 0 to 2, the length of the shortest path from 0 to 4 is 2.

![3243 expl 1 3](https://github.com/user-attachments/assets/ad3b3d43-5fb3-496c-8053-42bc0c5bd3a5)

➺ After the addition of the road from 0 to 4, the length of the shortest path from 0 to 4 is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  n = 4, queries = [[0,3],[0,2]]

  ### 📤 `Output`  ➤ [1,1]

  ### 🔦 `Explanation` ➤ 

![3243 expl 2 1](https://github.com/user-attachments/assets/5d82d22e-8a9f-4a55-a2ba-931e2971ab69)

➺ After the addition of the road from 0 to 3, the length of the shortest path from 0 to 3 is 1.

![3243 expl 2 2](https://github.com/user-attachments/assets/cb9a3c41-9496-4ff1-9f02-f7a4b62c0a0d)

➺ After the addition of the road from 0 to 2, the length of the shortest path remains 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= n <= 500`** </br>

🔹 **`1 <= queries.length <= 500`** </br>

🔹 **`queries[i].length == 2`** </br>

🔹 **`0 <= queries[i][0] < queries[i][1] < n`** </br>

🔹 **`1 < queries[i][1] - queries[i][0]`** </br>

🔹 **There are no repeated roads among the queries.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/27%20-%2011%20-%202024%20---%20%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/27%20-%2011%20-%202024%20---%20%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/27%20-%2011%20-%202024%20---%20%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/27%20-%2011%20-%202024%20---%20%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203243.%20Shortest%20Distance%20After%20Road%20Addition%20Queries%20I.js) |
