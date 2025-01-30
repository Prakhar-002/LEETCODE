# 2493. Divide Nodes Into the Maximum Number of Groups

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/description/?envType=daily-question&envId=2025-01-30"><strong>➥ 🫀 2493 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n` representing the number of nodes in an undirected graph. The nodes are labeled from `1` to `n`.

### You are also given a 2D integer array `edges`, where edges[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that there is a bidirectional edge between nodes a<sub>i</sub> and b<sub>i</sub>. Notice that the given graph may be disconnected.

### Divide the nodes of the graph into `m` groups (1-indexed) such that:

- Each node in the graph belongs to exactly one group.

- For every pair of nodes in the graph that are connected by an edge [a<sub>i</sub>, b<sub>i</sub>], if a<sub>i</sub> belongs to the group with index `x`, and b<sub>i</sub> belongs to the group with index `y`, then `|y - x| = 1`.

### Return *the maximum number of groups (i.e., maximum m) into which you can divide the nodes*. Return `-1` *if it is impossible to group the nodes with the given conditions*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c98b3ac3-b657-4525-88e3-5f0fe7a64ac2" width="352px" height="201px"/>

  ### 📥 `Input`  ➤  n = 6, edges = [[1,2],[1,4],[1,5],[2,6],[2,3],[4,6]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ As shown in the image we:</br> ➺ Add node 5 to the first group.</br> ➺ Add node 1 to the second group.</br> ➺ Add nodes 2 and 4 to the third group.</br> ➺ Add nodes 3 and 6 to the fourth group.</br> We can see that every edge is satisfied.</br> It can be shown that that if we create a fifth group and move any node from the third or fourth group to it, at least on of the edges will not be satisfied.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, edges = [[1,2],[2,3],[3,1]]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ If we add node 1 to the first group, node 2 to the second group, and node 3 to the third group to satisfy the first two edges, we can see that the third edge will not be satisfied.</br> It can be shown that no grouping is possible.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 500`** </br>

🔹 **1 <= edges.length <= 10<sup>4</sup>** </br>

🔹 **`edges[i].length == 2`** </br>

🔹 **1 <= a<sub>i</sub>, b<sub>i</sub> <= n** </br>

🔹 **a<sub>i</sub> != b<sub>i</sub>** </br>

🔹 **There is at most one edge between any pair of vertices.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/30%20-%2001%20-%202025%20---%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/30%20-%2001%20-%202025%20---%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/30%20-%2001%20-%202025%20---%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/30%20-%2001%20-%202025%20---%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202493.%20Divide%20Nodes%20Into%20the%20Maximum%20Number%20of%20Gr.js) |

