# 684. Redundant Connection

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/redundant-connection/description/?envType=daily-question&envId=2025-01-29"><strong>➥ ☢️ 684 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In this problem, a tree is an `undirected graph` that is connected and has no cycles.

### You are given a graph that started as a tree with `n` nodes labeled from `1` to `n`, with one additional edge added. The added edge has two different vertices chosen from `1` to `n`, and was not an edge that already existed. The graph is represented as an array `edges` of length `n` where edges[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that there is an edge between nodes a<sub>i</sub> and b<sub>i</sub> in the graph.

### Return *an edge that can be removed so that the resulting graph is a tree of* `n` *nodes*. If there are multiple answers, return the answer that occurs last in the input.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/4452949a-6bf1-430d-9fde-28458c8837c8" width="222px" height="222px" />

  ### 📥 `Input`  ➤ edges = [[1,2],[1,3],[2,3]]

  ### 📤 `Output`  ➤ [2,3]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/e67dd401-c21f-45e7-88f1-f077984e5113" width="384px" height="222px"/>

  ### 📥 `Input` ➤ edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]

  ### 📤 `Output`  ➤ [1,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == edges.length`** </br>

🔹 **`3 <= n <= 1000`** </br>

🔹 **`edges[i].length == 2`** </br>

🔹 **1 <= a<sub>i</sub> < b<sub>i</sub> <= edges.length** </br>

🔹 **a<sub>i</sub> != b<sub>i</sub>** </br>

🔹 **There are no repeated edges.** </br>

🔹 **The given graph is connected.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/29%20-%2001%20-%202025%20---%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20684.%20Redundant%20Connection.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/29%20-%2001%20-%202025%20---%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20684.%20Redundant%20Connection.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/29%20-%2001%20-%202025%20---%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20684.%20Redundant%20Connection.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/29%20-%2001%20-%202025%20---%20684.%20Redundant%20Connection%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20684.%20Redundant%20Connection.js) |