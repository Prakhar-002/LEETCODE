# Q3. Design Graph With Shortest Path Calculator

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-graph-with-shortest-path-calculator/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-shortest-path"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
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

<img width="621" height="191" alt="2642 que 1" src="https://github.com/user-attachments/assets/e8676269-3255-48ad-a7f4-a356e9c43f69" />

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q3.%20Design%20Graph%20With%20Shortest%20Path%20Calculator/%F0%9F%8D%81JAVA%20-%20Design%20Graph%20With%20Shortest%20Path%20Calculator.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q3.%20Design%20Graph%20With%20Shortest%20Path%20Calculator/%F0%9F%8E%B2CPP%20-%20Design%20Graph%20With%20Shortest%20Path%20Calculator.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q3.%20Design%20Graph%20With%20Shortest%20Path%20Calculator/%F0%9F%8D%B0PYTHON%20-%20Design%20Graph%20With%20Shortest%20Path%20Calculator.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Shortest%20Path/Q3.%20Design%20Graph%20With%20Shortest%20Path%20Calculator/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Design%20Graph%20With%20Shortest%20Path%20Calculator.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a785817e-839d-4b52-86b2-7ef939af9867" width = "700px" height="462px" />

</h1>
