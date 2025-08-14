# 133. Clone Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/clone-graph/description/"><strong>➥ ☢️ 133 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a reference to a node in a connected, undirected graph.

### Your task is to create and return a *deep copy* (or clone) of the entire graph. A deep copy implies creating new nodes and edges such that the resulting graph is structurally identical to the original, but does *not* share any memory with the original graph.

### Key aspects of each node in the graph:

- `.val`: An integer representing the node's value.
- `.neighbors`: A list (of `Node` objects) representing the node's neighbors.

### Details on the Test Case Format:

### To keep things simple, each node's `.val` corresponds to its index (1-indexed). Therefore, the first node has `val = 1`, the second has `val = 2`, and so on. The graph structure is provided using an adjacency list.

### An adjacency list is simply a list of lists that describe the neighbors of each node. Specifically, for the i<sup>th</sup> node, the adjacency list stores an unordered list of its neighboring node indices.

### Input: The given node will always be the first node with `val = 1`.
### Output: You must return the copy of the given node (i.e., the clone of the starting node from the original graph) as a reference to the head of the *cloned* graph.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="2008" height="2210" alt="133 que 1" src="https://github.com/user-attachments/assets/56500d7c-571d-4da0-9a2b-c660401d5eba" />

  ### 📥 `Input`  ➤ adjList = [[2,4],[1,3],[2,4],[1,3]]

  ### 📤 `Output`  ➤ [[2,4],[1,3],[2,4],[1,3]]

  ### 🔦 `Explanation`  ➤ There are 4 nodes in the graph.

- Node 1 (val = 1)'s neighbors are Node 2 (val = 2) and Node 4 (val = 4).
- Node 2 (val = 2)'s neighbors are Node 1 (val = 1) and Node 3 (val = 3).
- Node 3 (val = 3)'s neighbors are Node 2 (val = 2) and Node 4 (val = 4).
- Node 4 (val = 4)'s neighbors are Node 1 (val = 1) and Node 3 (val = 3).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="163" height="148" alt="133 que 2" src="https://github.com/user-attachments/assets/980df3bb-e769-4417-9dc2-031a96ade61c" />

  ### 📥 `Input` ➤ adjList = [[]]

  ### 📤 `Output`  ➤ [[]]

  ### 🔦 `Explanation` ➤ Note that the input contains one empty list. The graph consists of only one node with val = 1 and it does not have any neighbors.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ adjList = []

  ### 📤 `Output`  ➤ []

  ### 🔦 `Explanation` ➤ This an empty graph; it does not have any nodes.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the graph is in the range [0, 100]. </br>

🔹 1 <= Node.val <= 100 </br>

🔹 Node.val is unique for each node. </br>

🔹 There are no repeated edges and no self-loops in the graph. </br>

🔹 The Graph is connected and all nodes can be visited starting from the given node. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **Linked List**  </br>

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

<img src ="https://github.com/user-attachments/assets/49dbd4be-0c64-4b70-8f93-26de72202eec" width = "700px" height="462px" />

</h1>
