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

➺ After the addition of the road from 2 to 4, the length of the shortest path from 0 to 4 is 3.

➺ After the addition of the road from 0 to 2, the length of the shortest path from 0 to 4 is 2.

➺ After the addition of the road from 0 to 4, the length of the shortest path from 0 to 4 is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  n = 4, queries = [[0,3],[0,2]]

  ### 📤 `Output`  ➤ [1,1]

  ### 🔦 `Explanation` ➤ 

➺ After the addition of the road from 0 to 3, the length of the shortest path from 0 to 3 is 1.

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
