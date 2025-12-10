# Q1. Find if Path Exists in Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-if-path-exists-in-graph/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-bfs"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a **bi-directional (undirected) graph** with `n` vertices labeled from `0` to `n - 1`. The edges are given as a 2D integer array `edges`, where each `edges[i] = [uᵢ, vᵢ]` represents an undirected edge between vertex `uᵢ` and vertex `vᵢ`. Every pair of vertices has **at most one edge** between them, and no vertex has an edge to itself.

- You are also given integers `source` and `destination`.
- A **valid path** is any sequence of vertices starting at `source` and ending at `destination` such that every consecutive pair of vertices in the sequence is connected by an edge in the graph.

### Your task is to **return `true`** if there exists a valid path from `source` to `destination`, or **`false`** otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="141" height="121" alt="1971 que 1" src="https://github.com/user-attachments/assets/6d6240c9-e0d5-4f9f-b11c-6a86ca51a220" />

### 📥 `Input`  ➤  
`n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation`  ➤ There are two valid paths from vertex `0` to vertex `2`:  
- `0 → 1 → 2`  
- `0 → 2`  

### Since at least one valid path exists, the answer is `true`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="281" height="141" alt="1971 que 2" src="https://github.com/user-attachments/assets/37f29cd6-0449-4d86-8c8a-3fd96ed5b44b" />

### 📥 `Input` ➤  
`n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5`

### 📤 `Output`  ➤ `false`

### 🔦 `Explanation` ➤ The graph has two disconnected components: one containing vertices `{0,1,2}` and another containing `{3,4,5}`. Since vertex `0` and vertex `5` are in different components, there is **no valid path** between them.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 2 * 10^5` </br>
🔹 `0 <= edges.length <= 2 * 10^5` </br>
🔹 `edges[i].length == 2` </br>
🔹 `0 <= uᵢ, vᵢ <= n - 1` </br>
🔹 `uᵢ != vᵢ` </br>
🔹 `0 <= source, destination <= n - 1` </br>
🔹 There are **no duplicate edges**. </br>
🔹 There are **no self edges**. </br>

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
