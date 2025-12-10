# Q1. Minimum Number of Vertices to Reach All Nodes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-graph"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a **directed acyclic graph (DAG)** with `n` vertices numbered from `0` to `n - 1`, and an array `edges` where `edges[i] = [fromᵢ, toᵢ]` represents a directed edge from node `fromᵢ` to node `toᵢ`.

- You need to **find the smallest set of vertices** from which **all nodes in the graph are reachable**.
- It is guaranteed that a **unique solution** exists.
- You may return the vertices in **any order**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="231" height="181" alt="1557 que 1" src="https://github.com/user-attachments/assets/ef6f0d18-858a-48a7-a3c3-51a092883f8b" />

### 📥 `Input`  ➤ `n = 6, edges = [[0,1],[0,2],[2,5],[3,4],[4,2]]`

### 📤 `Output`  ➤ `[0,3]`

### 🔦 `Explanation`  ➤ It is not possible to reach all nodes from a single vertex. From `0` you can reach `[0,1,2,5]`. From `3` you can reach `[3,4,2,5]`. Therefore, the smallest set of starting vertices is `[0,3]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="201" height="201" alt="1557 que 2" src="https://github.com/user-attachments/assets/0ba67093-6ddc-4825-9e19-b2040193f652" />

### 📥 `Input` ➤ `n = 5, edges = [[0,1],[2,1],[3,1],[1,4],[2,4]]`

### 📤 `Output`  ➤ `[0,2,3]`

### 🔦 `Explanation` ➤ Vertices `0`, `2`, and `3` are **not reachable from any other node**, so they must all be included in the answer. Starting from these vertices, you can reach nodes `1` and `4` as well.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 10^5` </br>
🔹 `1 <= edges.length <= min(10^5, n * (n - 1) / 2)` </br>
🔹 `edges[i].length == 2` </br>
🔹 `0 <= fromᵢ, toᵢ < n` </br>
🔹 All pairs `(fromᵢ, toᵢ)` are **distinct**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

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
