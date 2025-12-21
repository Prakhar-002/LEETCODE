# Q1. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description/?envType=problem-list-v2&envId=dsa-tree-shaped-deep-forest-minimum-spanning-tree"><strong>➥ 🫀 Q1 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a weighted undirected connected graph with `n` vertices numbered from `0` to `n - 1`, and an array `edges` where `edges[i] = [aᵢ, bᵢ, weightᵢ]` represents a bidirectional weighted edge between nodes `aᵢ` and `bᵢ`. A minimum spanning tree (MST) is a subset of the graph's edges that connects all vertices **without cycles** and with the **minimum possible total edge weight**.

### Find all the **critical** and **pseudo-critical** edges in the given graph's MST:
- A **critical edge** is an MST edge whose deletion from the graph causes the MST total weight to **increase**.
- A **pseudo-critical edge** is an edge that can appear in **some** MSTs but not necessarily in all.

### Return a list `[critical, pseudoCritical]`, where each contains the **indices** of edges in `edges`. The order inside each list does not matter.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="259" height="262" alt="1489 que 1" src="https://github.com/user-attachments/assets/1d3e6593-77fc-4cfe-ad2c-f06b39536d53" />

### 📥 `Input`  ➤  
`n = 5`  
`edges = [[0,1,1],[1,2,1],[2,3,2],[0,3,2],[0,4,3],[3,4,3],[1,4,6]]`

### 📤 `Output`  ➤ `[[0,1],[2,3,4,5]]`

### 🔦 `Explanation`  ➤  
Edges with indices `0` and `1` appear in **all** MSTs, so they are **critical**.  
Edges with indices `2, 3, 4, 5` appear in **some** MSTs but not all, so they are **pseudo-critical**.

<img width="540" height="553" alt="1489 que 2" src="https://github.com/user-attachments/assets/1238f47a-3000-418c-9c4a-bf2ee35ddbc4" />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="247" height="253" alt="1489 que 3" src="https://github.com/user-attachments/assets/7e8c5b35-d09d-4ee8-b989-8b14bb04b2f3" />

### 📥 `Input` ➤  
`n = 4`  
`edges = [[0,1,1],[1,2,1],[2,3,1],[0,3,1]]`

### 📤 `Output`  ➤ `[[],[0,1,2,3]]`

### 🔦 `Explanation` ➤  
All 4 edges have equal weight, and any choice of **3** edges forms an MST. Therefore, all edges are **pseudo-critical**, and there are **no** critical edges.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 100` </br>
🔹 `1 <= edges.length <= min(200, n * (n - 1) / 2)` </br>
🔹 `edges[i].length == 3` </br>
🔹 `0 <= aᵢ < bᵢ < n` </br>
🔹 `1 <= weightᵢ <= 1000` </br>
🔹 All pairs `(aᵢ, bᵢ)` are **distinct**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Union Find** </br>
🔸 **Graph** </br>
🔸 **Sorting** </br>
🔸 **Minimum Spanning Tree** </br>
🔸 **Strongly Connected Component** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
