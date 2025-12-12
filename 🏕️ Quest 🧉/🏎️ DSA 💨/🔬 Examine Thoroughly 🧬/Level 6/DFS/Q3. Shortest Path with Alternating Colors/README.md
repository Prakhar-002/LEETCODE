# Q3. Shortest Path with Alternating Colors

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-path-with-alternating-colors/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-dfs"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n`, the number of nodes in a directed graph where the nodes are labeled from `0` to `n - 1`. Each edge is **red** or **blue**, and there can be **self-edges** and **parallel edges**. You are given two arrays `redEdges` and `blueEdges` where:
- `redEdges[i] = [aᵢ, bᵢ]` indicates a directed **red** edge from node `aᵢ` to node `bᵢ`.
- `blueEdges[j] = [uⱼ, vⱼ]` indicates a directed **blue** edge from node `uⱼ` to node `vⱼ`.

### Return an array `answer` of length `n`, where `answer[x]` is the length of the **shortest path** from node `0` to node `x` such that the **edge colors alternate** along the path, or `-1` if such a path does not exist.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  `n = 3, redEdges = [[0,1],[1,2]], blueEdges = []`

### 📤 `Output`  ➤ `[0,1,-1]`

### 🔦 `Explanation`  ➤ There is a red path `0 -> 1` of length `1`, but no alternating-color path to node `2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 3, redEdges = [[0,1]], blueEdges = [[2,1]]`

### 📤 `Output`  ➤ `[0,1,-1]`

### 🔦 `Explanation` ➤ There is a red edge `0 -> 1`, so distance to node `1` is `1`. There is no alternating-color path from `0` to node `2`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 100` </br>
🔹 `0 <= redEdges.length, blueEdges.length <= 400` </br>
🔹 `redEdges[i].length == blueEdges[j].length == 2` </br>
🔹 `0 <= aᵢ, bᵢ, uⱼ, vⱼ < n` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Breadth-First Search** </br>
🔸 **Graph** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q3.%20Shortest%20Path%20with%20Alternating%20Colors/%F0%9F%8D%81JAVA%20-%20Shortest%20Path%20with%20Alternating%20Colors.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q3.%20Shortest%20Path%20with%20Alternating%20Colors/%F0%9F%8E%B2CPP%20-%20Shortest%20Path%20with%20Alternating%20Colors.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q3.%20Shortest%20Path%20with%20Alternating%20Colors/%F0%9F%8D%B0PYTHON%20-%20Shortest%20Path%20with%20Alternating%20Colors.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q3.%20Shortest%20Path%20with%20Alternating%20Colors/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Shortest%20Path%20with%20Alternating%20Colors.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/df49e2fd-f68e-4453-9375-8817a91cecaa" width = "700px" height="462px" />

</h1>
