# 1791. Find Center of Star Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-center-of-star-graph/description/?envType=daily-question&envId=2024-06-27"><strong>➥ ♻️ 1438 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is an undirected star graph consisting of `n` nodes labeled from `1` to `n`. A star graph is a graph where there is one center node and exactly `n - 1` edges that connect the center node with every other node.

### You are given a 2D integer array `edges` where each `edges[i] = [ui, vi]` indicates that there is an edge between the nodes `ui` and `vi`. Return the center of the given star graph.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1791 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/41c64fd7-a749-4ede-b0fd-c27498f2a05a)

  ### Input  ➤ edges = [[1,2],[2,3],[4,2]]

  ### Output  ➤ 2

  ### Explanation  ➤  As shown in the figure above, node 2 is connected to every other node, so 2 is the center.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ edges = [[1,2],[5,1],[1,3],[1,4]]

  ### Output  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

- 3 <= n <= 10<sup>5</sup>
- **edges.length == n - 1**
- **edges[i].length == 2**
- **1 <= ui, vi <= n**
- **ui != vi**
- **The given `edges` represent a valid star graph.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Graph**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/27%20-%2006%20-%202024%20---%201791.%20Find%20Center%20of%20Star%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1791_FindCenterOfStarGraph.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/27%20-%2006%20-%202024%20---%201791.%20Find%20Center%20of%20Star%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_1791_FindCenterOfStarGraph.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/27%20-%2006%20-%202024%20---%201791.%20Find%20Center%20of%20Star%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1791_FindCenterOfStarGraph.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/27%20-%2006%20-%202024%20---%201791.%20Find%20Center%20of%20Star%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1791_FindCenterOfStarGraph.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |


