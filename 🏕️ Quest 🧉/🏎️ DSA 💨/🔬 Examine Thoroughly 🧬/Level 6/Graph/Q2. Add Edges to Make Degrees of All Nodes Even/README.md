# Q2. Add Edges to Make Degrees of All Nodes Even

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/add-edges-to-make-degrees-of-all-nodes-even/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-graph"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is an **undirected graph** consisting of `n` nodes numbered from `1` to `n`. You are given the integer `n` and a 2D array `edges` where `edges[i] = [aᵢ, bᵢ]` indicates that there is an edge between nodes `aᵢ` and `bᵢ`. The graph can be **disconnected**.

- You can add **at most two additional edges** (possibly none) to this graph.
- The added edges must **not** create repeated edges and must **not** be self-loops (i.e., an edge from a node to itself is not allowed).
- The **degree** of a node is the number of edges connected to it.

### Your task is to **return `true`** if it is possible to make the degree of **each node** in the graph **even** by adding at most two edges, otherwise return **`false`**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="661" height="251" alt="2508 que 1" src="https://github.com/user-attachments/assets/16fb256c-8af2-48ad-8d7d-049538df3bf7" />

### 📥 `Input`  ➤ `n = 5, edges = [[1,2],[2,3],[3,4],[4,2],[1,4],[2,5]]`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation`  ➤ There exists a way to add one extra edge (for example, between two nodes of odd degree) so that every node in the resulting graph has an even degree.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="471" height="141" alt="2508 que 2" src="https://github.com/user-attachments/assets/0bf9313d-755b-47fc-9325-7ff64a3ab9ec" />

### 📥 `Input` ➤ `n = 4, edges = [[1,2],[3,4]]`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation` ➤ It is possible to add two edges (for example, connecting `1–3` and `2–4`) so that all nodes end up with even degree.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="191" height="201" alt="2508 que 3" src="https://github.com/user-attachments/assets/b041c5aa-3538-4171-b7a0-762729171659" />

### 📥 `Input` ➤ `n = 4, edges = [[1,2],[1,3],[1,4]]`

### 📤 `Output`  ➤ `false`

### 🔦 `Explanation` ➤ Nodes `1, 2, 3, 4` all have odd degree, and it is **not** possible to make all degrees even by adding at most two edges without creating repeated edges or self-loops.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= n <= 10^5` </br>
🔹 `2 <= edges.length <= 10^5` </br>
🔹 `edges[i].length == 2` </br>
🔹 `1 <= aᵢ, bᵢ <= n` </br>
🔹 `aᵢ != bᵢ` </br>
🔹 There are **no repeated edges**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Graph** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q2.%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even/%F0%9F%8D%81JAVA%20-%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q2.%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even/%F0%9F%8E%B2CPP%20-%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q2.%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even/%F0%9F%8D%B0PYTHON%20-%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q2.%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Add%20Edges%20to%20Make%20Degrees%20of%20All%20Nodes%20Even.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8aa2ee22-fd5c-41fc-9dec-7494edf78dcd" width = "700px" height="462px" />

</h1>
