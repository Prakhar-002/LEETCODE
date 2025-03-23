# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
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

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ n = 6, edges = [[0,1],[0,2],[1,2],[3,4]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺ From the picture above, one can see that all of the components of this graph are complete.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

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

🔹 1 <= n <= 50 </br>
🔹 0 <= edges.length <= n * (n - 1) / 2 </br>
🔹 edges[i].length == 2 </br>
🔹 0 <= ai, bi <= n - 1 </br>
🔹 ai != bi </br>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
