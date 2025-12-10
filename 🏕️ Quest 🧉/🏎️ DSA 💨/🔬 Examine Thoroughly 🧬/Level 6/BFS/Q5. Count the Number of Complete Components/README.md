# Q5. Count the Number of Complete Components

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/count-the-number-of-complete-components/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-bfs"><strong>➥ ☢️ Q5 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given an **integer** `n`, representing the number of vertices in an **undirected graph** numbered from `0` to `n - 1`.

Additionally, you are given a **2D integer array** `edges`, where `edges[i] = [aᵢ, bᵢ]` denotes an **undirected edge** between vertices `aᵢ` and `bᵢ`.

### 🔹 Task:

- Return the **number of complete connected components** in the graph.
- A **connected component** is a subgraph where there exists a path between **any two vertices**, and **no vertex** is connected to a vertex outside the subgraph.
- A **complete connected component** is one where **every pair of vertices** is directly connected by an edge.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/6260f93f-27ca-4718-9122-c59262410e5b" width="414px" height="166.88px"/>

  ### 📥 `Input`  ➤ n = 6, edges = [[0,1],[0,2],[1,2],[3,4]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺ From the picture above, one can see that all of the components of this graph are complete.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/dba9a820-1c36-474c-8c57-b7032a72bc5a" width="414px" height="166.88px" />

  ### 📥 `Input` ➤ n = 6, edges = [[0,1],[0,2],[1,2],[3,4],[3,5]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The component containing vertices 0, 1, and 2 is complete since there is an edge between every pair of two vertices. On the other hand, the component containing vertices 3, 4, and 5 is not complete since there is no edge between vertices 4 and 5. Thus, the number of complete components in this graph is 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, edges = [[0,1],[1,2]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤  There is one connected component consisting of nodes 0, 1, and 2. However, the component is incomplete, as node 0 and 2 are not connected. Therefore, the result is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 50` </br>
🔹 `0 <= edges.length <= n * (n - 1) / 2` </br>
🔹 `edges[i].length == 2` </br>
🔹 0 <= a<sub>i</sub>, b<sub>i</sub> <= n - 1 </br>
🔹 a<sub>i</sub> != b<sub>i</sub> </br>
🔹 There are no repeated edges. </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/BFS/Q5.%20Count%20the%20Number%20of%20Complete%20Components/%F0%9F%8D%81JAVA%20-%20Count%20the%20Number%20of%20Complete%20Components.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/BFS/Q5.%20Count%20the%20Number%20of%20Complete%20Components/%F0%9F%8E%B2CPP%20-%20Count%20the%20Number%20of%20Complete%20Components.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/BFS/Q5.%20Count%20the%20Number%20of%20Complete%20Components/%F0%9F%8D%B0PYTHON%20-%20Count%20the%20Number%20of%20Complete%20Components.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/BFS/Q5.%20Count%20the%20Number%20of%20Complete%20Components/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Count%20the%20Number%20of%20Complete%20Components.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/032ff1bb-80ed-41b5-8e53-07e7bdce62d0" width = "700px" height="462px" />

</h1>
