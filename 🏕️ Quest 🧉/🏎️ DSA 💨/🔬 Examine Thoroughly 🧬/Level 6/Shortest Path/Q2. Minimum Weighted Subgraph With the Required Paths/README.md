# Q2. Minimum Weighted Subgraph With the Required Paths

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-weighted-subgraph-with-the-required-paths/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-shortest-path"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` denoting the number of nodes of a **weighted directed** graph. The nodes are numbered from `0` to `n - 1`. 

### You are also given a 2D integer array `edges` where `edges[i] = [fromᵢ, toᵢ, weightᵢ]` denotes that there exists a directed edge from `fromᵢ` to `toᵢ` with weight `weightᵢ`. 

### Lastly, you are given three **distinct** integers `src1`, `src2`, and `dest` denoting three distinct nodes of the graph.

### Return the **minimum weight** of a subgraph of the graph such that it is **possible** to reach `dest` from both `src1` and `src2` via a set of edges of this subgraph. In case such a subgraph does not exist, return `-1`. 

### A **subgraph** is a graph whose vertices and edges are subsets of the original graph, and the **weight** of a subgraph is the sum of weights of its constituent edges.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`n = 6`  
`edges = [[0,2,2],[0,5,6],[1,0,3],[1,4,5],[2,1,1],[2,3,3],[2,3,4],[3,4,2],[4,5,1]]`  
`src1 = 0, src2 = 1, dest = 5`

### 📤 `Output`  ➤ `9`

### 🔦 `Explanation`  ➤ 

- The above figure represents the input graph.
- The blue edges represent one of the subgraphs that yield the optimal answer.
- Note that the subgraph [[1,0,3],[0,5,6]] also yields the optimal answer. It is not possible to get a subgraph with less weight satisfying all the constraints.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 3`  
`edges = [[0,1,1],[2,1,1]]`  
`src1 = 0, src2 = 1, dest = 2`

### 📤 `Output`  ➤ `-1`

### 🔦 `Explanation` ➤ There is no path from node `1` to node `2`, so there is no subgraph in which both `src1` and `src2` can reach `dest`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= n <= 10^5` </br>
🔹 `0 <= edges.length <= 10^5` </br>
🔹 `edges[i].length == 3` </br>
🔹 `0 <= fromᵢ, toᵢ, src1, src2, dest <= n - 1` </br>
🔹 `fromᵢ != toᵢ` </br>
🔹 `src1`, `src2`, and `dest` are pairwise distinct. </br>
🔹 `1 <= weight[i] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Graph** </br>
🔸 **Shortest Path** </br>

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
