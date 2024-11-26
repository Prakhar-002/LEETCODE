# 2924. Find Champion II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-champion-ii/description/?envType=daily-question&envId=2024-11-26"><strong>➥ ☢️ 2924 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` teams numbered from `0` to `n - 1` in a tournament; each team is also a node in a DAG.

### You are given the integer `n` and a 0-indexed 2D integer array `edges` of length `m` representing the DAG, where edges[i] = [u<sub>i</sub>, v<sub>i</sub>] indicates that there is a directed edge from team u<sub>i</sub> to team v<sub>i</sub> in the graph.

### A directed edge from `a` to `b` in the graph means that team `a` is stronger than team `b` and team `b` is weaker than team `a`.

### Team `a` will be the champion of the tournament if there is no team `b` that is stronger than team `a`.

### Return *the team that will be the champion of the tournament if there is a unique champion, otherwise, return `-1`*.

### Notes

- A cycle is a series of nodes a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>, a<sub>n+1</sub> such that node a<sub>1</sub> is the same node as node a<sub>n+1</sub>, the nodes a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> are distinct, and there is a directed edge from the node a<sub>i</sub> to node a<sub>i+1</sub> for every `i` in the range `[1, n]`.

- A DAG is a directed graph that does not have any cycle.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2924 que 1](https://github.com/user-attachments/assets/03adeca2-2aa7-451b-818d-72a2e73ab82e)

  ### 📥 `Input`  ➤ n = 3, edges = [[0,1],[1,2]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Team 1 is weaker than team 0. Team 2 is weaker than team 1. So the champion is team 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2924 que 2](https://github.com/user-attachments/assets/1084415f-1136-413b-9a56-37914e7d46ab)

  ### 📥 `Input` ➤ n = 4, edges = [[0,2],[1,3],[1,2]]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ Team 2 is weaker than team 0 and team 1. Team 3 is weaker than team 1. But team 1 and team 0 are not weaker than any other teams. So the answer is -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 100`** </br>

🔹 **`m == edges.length`** </br>

🔹 **`0 <= m <= n * (n - 1) / 2`** </br>

🔹 **`edges[i].length == 2`** </br>

🔹 **`0 <= edge[i][j] <= n - 1`** </br>

🔹 **`edges[i][0] != edges[i][1]`** </br>

🔹 **The input is generated such that if team `a` is stronger than team `b`, team `b` is not stronger than team `a`.** </br>

🔹 **The input is generated such that if team `a` is stronger than team `b` and team `b` is stronger than team `c`, then team `a` is stronger than team `c`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/26%20-%2011%20-%202024%20---%20%202924.%20Find%20Champion%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202924.%20Find%20Champion%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/26%20-%2011%20-%202024%20---%20%202924.%20Find%20Champion%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202924.%20Find%20Champion%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/26%20-%2011%20-%202024%20---%20%202924.%20Find%20Champion%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202924.%20Find%20Champion%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/26%20-%2011%20-%202024%20---%20%202924.%20Find%20Champion%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202924.%20Find%20Champion%20II.js) |

