# 2192. All Ancestors of a Node in a Directed Acyclic Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/description/"><strong>➥ ☢️ 2192 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n` representing the number of nodes of a `Directed Acyclic Graph` (DAG). The nodes are numbered from `0` to `n - 1 `(inclusive).

### You are also given a 2D integer array `edges`, where `edges[i] = [fromi, toi] `denotes that there is a `unidirectional` edge from `fromi` to `toi` in the graph.

### Return *a list `answer`, where `answer[i]` is the list of `ancestors` of the ith node, sorted in `ascending order`*.

### A node `u` is an `ancestor` of another node `v` if `u` can reach v via a set of edges.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2192 que 1 new](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/f03117c0-d63e-491f-8b52-3d3ebb8daead)

  ### Input  ➤  n = 8, edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

  ### Output  ➤ [[],[],[],[0,1],[0,2],[0,1,3],[0,1,2,3,4],[0,1,2,3]]

  ### Explanation  ➤ The above diagram represents the input graph.
    - Nodes 0, 1, and 2 do not have any ancestors.

    - Node 3 has two ancestors 0 and 1.

    - Node 4 has two ancestors 0 and 2.

    - Node 5 has three ancestors 0, 1, and 3.

    - Node 6 has five ancestors 0, 1, 2, 3, and 4.

    - Node 7 has four ancestors 0, 1, 2, and 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2192 que 2 new](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/97c9b4c6-2e3f-40e9-ae70-3fb419a5e502)

  ### Input ➤ n = 5, edgeList = [[0,1],[0,2],[0,3],[0,4],[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]] 

  ### Output  ➤ [[],[0],[0,1],[0,1,2],[0,1,2,3]]

  ### Explanation ➤ The above diagram represents the input graph.

    - Node 0 does not have any ancestor.

    - Node 1 has one ancestor 0.

    - Node 2 has two ancestors 0 and 1.

    - Node 3 has three ancestors 0, 1, and 2.

    - Node 4 has four ancestors 0, 1, 2, and 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= n <= 1000**
- **0 <= edges.length <= min(2000, n * (n - 1) / 2)**
- **edges[i].length == 2**
- **0 <= fromi, toi <= n - 1**
- **fromi != toi**
- **There are no duplicate edges.**
- **The graph is `directed` and `acyclic`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Depth-First Search**
2. **Breadth-First Search**
3. **Graph**
4. **Topological Sort**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/29%20-%2006%20-%202024%20---%202192.%20All%20Ancestors%20of%20a%20Node%20in%20a%20Directed%20Acyclic%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_2192_AllAncestorsOfANodeInADirectedAcyclicGraph.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/29%20-%2006%20-%202024%20---%202192.%20All%20Ancestors%20of%20a%20Node%20in%20a%20Directed%20Acyclic%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_2192_AllAncestorsOfANodeInADirectedAcyclicGraph.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/29%20-%2006%20-%202024%20---%202192.%20All%20Ancestors%20of%20a%20Node%20in%20a%20Directed%20Acyclic%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_2192_AllAncestorsOfANodeInADirectedAcyclicGraph.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/29%20-%2006%20-%202024%20---%202192.%20All%20Ancestors%20of%20a%20Node%20in%20a%20Directed%20Acyclic%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_2192_AllAncestorsOfANodeInADirectedAcyclicGraph.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/solutions/5385288/beats-100-only-steps-fastest-easy-detailed-explanation)  |
