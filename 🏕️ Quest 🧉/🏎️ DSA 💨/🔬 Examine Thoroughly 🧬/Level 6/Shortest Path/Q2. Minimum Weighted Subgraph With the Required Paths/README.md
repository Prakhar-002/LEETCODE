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

<img width="411" height="391" alt="2203 que 1" src="https://github.com/user-attachments/assets/7471c25d-1dc7-49e6-8f46-4cb8244e5536" />

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

<img width="491" height="71" alt="2203 que 2" src="https://github.com/user-attachments/assets/7a14fd07-8642-41ba-884f-3f2afd2aed91" />

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q2.%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths/%F0%9F%8D%81JAVA%20-%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q2.%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths/%F0%9F%8E%B2CPP%20-%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q2.%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths/%F0%9F%8D%B0PYTHON%20-%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q2.%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Minimum%20Weighted%20Subgraph%20With%20the%20Required%20Paths.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8dc2140f-0abe-443f-9877-2d30ec297a33" width = "700px" height="462px" />

</h1>
