# 684. Redundant Connection

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/redundant-connection/description/"><strong>➥ ☢️ 684 Leetcode Que Medium ☢️ </strong></a> 
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In this problem, a tree is an `undirected graph` that is connected and has no cycles.

### You are given a graph that started as a tree with `n` nodes labeled from `1` to `n`, with one additional edge added. The added edge has two different vertices chosen from `1` to `n`, and was not an edge that already existed. The graph is represented as an array `edges` of length `n` where `edges[i] = [ai, bi]` indicates that there is an edge between nodes `ai` and `bi` in the graph.

###  Return *an edge that can be removed so that the resulting graph is a tree of `n` nodes*. If there are multiple answers, return the answer that occurs last in the input.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![684 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/e4faf039-6511-443f-afc2-9c8b26d8678b)

  ### Input  ➤ edges = [[1,2],[1,3],[2,3]]

  ### Output  ➤ [2,3]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![684 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/764a4773-8a0b-4fb8-8c98-a132bc5df67b)

  ### Input ➤ edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]

  ### Output  ➤ [1,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == edges.length**
- **3 <= n <= 1000**
- **edges[i].length == 2**
- **1 <= ai < bi <= edges.length**
- **ai != bi**
- **There are no repeated edges.**
- **The given graph is connected.**


</br>

# Topics 📋 ˋ°•*⁀➷

1. **Depth-First Search**
2. **Breadth-First Search**
3. **Union Find**
4. **Graph**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_684_RedundantConnection.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_684_RedundantConnection.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_684_RedundantConnection.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_684_RedundantConnection.js) |

