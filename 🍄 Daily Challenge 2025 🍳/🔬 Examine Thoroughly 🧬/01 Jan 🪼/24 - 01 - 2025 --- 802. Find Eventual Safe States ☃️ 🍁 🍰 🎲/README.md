# 802. Find Eventual Safe States

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-eventual-safe-states/description/?envType=daily-question&envId=2025-01-24"><strong>➥ ☢️ 802 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a directed graph of `n` nodes with each node labeled from `0` to `n - 1`. The graph is represented by a 0-indexed 2D integer array `graph` where `graph[i]` is an integer array of nodes adjacent to node `i`, meaning there is an edge from node `i` to each node in `graph[i]`.

### A node is a `terminal node` if there are no outgoing edges. A node is a `safe node` if every possible path starting from that node leads to a `terminal node` (or another safe node).

### Return *an array containing all the `safe nodes` of the graph. The answer should be sorted in `ascending` order*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/7b55c245-5e3d-4aec-9969-c0c1d79c73f2" width="600px" height="171px"/>

  ### 📥 `Input`  ➤ graph = [[1,2],[2,3],[5],[0],[5],[],[]]

  ### 📤 `Output`  ➤ [2,4,5,6]

  ### 🔦 `Explanation`  ➤ The given graph is shown above.</br> Nodes 5 and 6 are terminal nodes as there are no outgoing edges from either of them.</br> Every path starting at nodes 2, 4, 5, and 6 all lead to either node 5 or 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]]

  ### 📤 `Output`  ➤ [4]

  ### 🔦 `Explanation` ➤ Only node 4 is a terminal node, and every path starting at node 4 leads to node 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == graph.length`** </br>

🔹 **1 <= n <= 10<sup>4</sup>** </br>

🔹 **`0 <= graph[i].length <= n`** </br>

🔹 **`0 <= graph[i][j] <= n - 1`** </br>

🔹 **`graph[i]` is sorted in a strictly increasing order.** </br>

🔹 **The graph may contain self-loops.** </br>

🔹 **The number of edges in the graph will be in the range [1, 4 * 10<sup>4</sup>].** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Topological Sort**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/24%20-%2001%20-%202025%20---%20802.%20Find%20Eventual%20Safe%20States%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20802.%20Find%20Eventual%20Safe%20States.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/24%20-%2001%20-%202025%20---%20802.%20Find%20Eventual%20Safe%20States%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20802.%20Find%20Eventual%20Safe%20States.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/24%20-%2001%20-%202025%20---%20802.%20Find%20Eventual%20Safe%20States%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20802.%20Find%20Eventual%20Safe%20States.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/24%20-%2001%20-%202025%20---%20802.%20Find%20Eventual%20Safe%20States%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20802.%20Find%20Eventual%20Safe%20States.js) |
