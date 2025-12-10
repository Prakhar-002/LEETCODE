# Q3. Minimum Score of a Path Between Two Cities

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-bfs"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n` representing `n` cities numbered from `1` to `n`. You are also given a 2D array `roads` where `roads[i] = [aᵢ, bᵢ, distanceᵢ]` indicates that there is a **bidirectional** road between cities `aᵢ` and `bᵢ` with distance equal to `distanceᵢ`. The cities graph is not necessarily connected.

### The **score** of a path between two cities is defined as the **minimum distance** of a road in this path. Return the **minimum possible score** of a path between cities `1` and `n`.

### Note:
- A path is a sequence of roads between two cities.  
- It is allowed for a path to contain the **same road multiple times**, and you can visit cities `1` and `n` multiple times along the path.  
- The test cases are generated such that there is **at least one path** between `1` and `n`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `n = 4, roads = [[1,2,9],[2,3,6],[2,4,5],[1,4,7]]`

### 📤 `Output`  ➤ `5`

### 🔦 `Explanation`  ➤ The path from city `1` to `4` with the minimum score is: `1 -> 2 -> 4`. The score of this path is `min(9, 5) = 5`. It can be shown that no other path has a smaller score.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `n = 4, roads = [[1,2,2],[1,3,4],[3,4,7]]`

### 📤 `Output`  ➤ `2`

### 🔦 `Explanation` ➤ The path from city `1` to `4` with the minimum score is: `1 -> 2 -> 1 -> 3 -> 4`. The score of this path is `min(2, 2, 4, 7) = 2`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 10^5` </br>
🔹 `1 <= roads.length <= 10^5` </br>
🔹 `roads[i].length == 3` </br>
🔹 `1 <= aᵢ, bᵢ <= n` </br>
🔹 `aᵢ != bᵢ` </br>
🔹 `1 <= distanceᵢ <= 10^4` </br>
🔹 There are **no repeated edges**. </br>
🔹 There is **at least one path** between `1` and `n`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Union Find** </br>
🔸 **Graph** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
