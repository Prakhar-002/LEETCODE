# Q3. Design Graph With Shortest Path Calculator

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-graph-with-shortest-path-calculator/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-shortest-path"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a **directed weighted** graph that consists of `n` nodes numbered from `0` to `n - 1`. The edges of the graph are initially represented by the array `edges` where `edges[i] = [fromᵢ, toᵢ, edgeCostᵢ]` means that there is an edge from `fromᵢ` to `toᵢ` with cost `edgeCostᵢ`. 

### Implement the `Graph` class:

- `Graph(int n, int[][] edges)` initializes the object with `n` nodes and the given edges.  
- `addEdge(int[] edge)` adds an edge to the list of edges where `edge = [from, to, edgeCost]`. It is guaranteed that there is **no edge** between the two nodes before adding this one.  
- `int shortestPath(int node1, int node2)` returns the **minimum cost** of a path from `node1` to `node2`. If no path exists, return `-1`. The cost of a path is the sum of the costs of the edges in the path.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["Graph", "shortestPath", "shortestPath", "addEdge", "shortestPath"]`  
`[[4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]]], [3, 2], [0, 3], [[1, 3, 4]], [0, 3]]`

### 📤 `Output`  ➤  
`[null, 6, -1, null, 6]`

### 🔦 `Explanation`  ➤  
`Graph g = new Graph(4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]]);`  
`g.shortestPath(3, 2);` returns `6`. The shortest path from `3` to `2` is `3 -> 0 -> 1 -> 2` with total cost `3 + 2 + 1 = 6`.  
`g.shortestPath(0, 3);` returns `-1` since there is no path from `0` to `3`.  
`g.addEdge([1, 3, 4]);` adds an edge from node `1` to node `3`.  
`g.shortestPath(0, 3);` now returns `6`. The shortest path is `0 -> 1 -> 3` with total cost `2 + 4 = 6`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 100` </br>
🔹 `0 <= edges.length <= n * (n - 1)` </br>
🔹 `edges[i].length == edge.length == 3` </br>
🔹 `0 <= fromᵢ, toᵢ, from, to, node1, node2 <= n - 1` </br>
🔹 `1 <= edgeCostᵢ, edgeCost <= 10^6` </br>
🔹 There are **no repeated edges** and **no self-loops** in the graph at any point. </br>
🔹 At most `100` calls will be made for `addEdge`. </br>
🔹 At most `100` calls will be made for `shortestPath`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Graph** </br>
🔸 **Design** </br>
🔸 **Heap (Priority Queue)** </br>
🔸 **Shortest Path** </br>

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
