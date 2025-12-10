# Q2. All Paths From Source to Target

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/all-paths-from-source-to-target/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-bfs"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a directed acyclic graph (DAG) of `n` nodes labeled from `0` to `n - 1`, find all possible paths from node `0` to node `n - 1` and return them in any order. 

### The graph is given as follows: `graph[i]` is a list of all nodes you can visit from node `i` (i.e., there is a directed edge from node `i` to node `graph[i][j]`).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![797 que 1](https://github.com/user-attachments/assets/276410ca-b895-4905-a6f3-381a0c43bd81)

### 📥 `Input`  ➤ `graph = [[1,2],[3],[3],[]]`

### 📤 `Output`  ➤ `[[0,1,3],[0,2,3]]`

### 🔦 `Explanation`  ➤ There are two paths: `0 -> 1 -> 3` and `0 -> 2 -> 3`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![797 que 2](https://github.com/user-attachments/assets/f0187aec-1052-4dd6-9f1c-82b3d82843d8)

### 📥 `Input` ➤ `graph = [[4,3,1],[3,2,4],[3],[4],[]]`

### 📤 `Output`  ➤ `[[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]`

### 🔦 `Explanation` ➤ (Not provided beyond the examples in the prompt.)

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == graph.length` </br>
🔹 `2 <= n <= 15` </br>
🔹 `0 <= graph[i][j] < n` </br>
🔹 `graph[i][j] != i` (i.e., there will be no self-loops). </br>
🔹 All the elements of `graph[i]` are unique. </br>
🔹 The input graph is guaranteed to be a DAG. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Backtracking** </br>
🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
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
