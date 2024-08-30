# 2699. Modify Graph Edge Weights

</br>

<h2 align="center">  

<a href="https://leetcode.com/problems/modify-graph-edge-weights/description/?envType=daily-question&envId=2024-08-30"><strong>➥ 🫀 2699 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `undirected weighted connected` graph containing `n` nodes labeled from `0` to `n - 1`, and an integer array `edges` where `edges[i] = [a-i, b-i, w-i]` indicates that there is an edge between nodes `a-i` and `b-i` with weight `w-i`.

### Some edges have a weight of `-1` `(w-i = -1)`, while others have a positive weight `(w-i > 0)`.

### Your task is to modify `all edges` with a weight of `-1` by assigning them `positive integer values` in the range `[1, 2 * 10^9]` so that the `shortest distance` between the nodes `source` and `destination` becomes equal to an integer `target`. If there are `multiple modifications` that make the shortest distance between `source` and `destination` equal to `target`, any of them will be considered correct.

### Return `an array containing all edges (even unmodified ones) in any order if it is possible to make the shortest distance from `source` to `destination` equal to `target`, or an `empty array` if it's impossible`.

### Note: You are not allowed to modify the weights of edges with initial positive weights.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2699 que 1](https://github.com/user-attachments/assets/9dfb07fe-d191-46f9-87dc-18aaece7f32f)

  ### 📥 `Input`  ➤ n = 5, edges = [[4,1,-1],[2,0,-1],[0,3,-1],[4,3,-1]], source = 0, destination = 1, target = 5

  ### 📤 `Output`  ➤ [[4,1,1],[2,0,1],[0,3,3],[4,3,1]]

  ### 🔦 `Explanation`  ➤ ➺The graph above shows a possible modification to the edges, making the distance from 0 to 1 equal to 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2699 que 2](https://github.com/user-attachments/assets/46d3a503-3d34-48c8-a103-0d14d08f1631)

  ### 📥 `Input` ➤ n = 3, edges = [[0,1,-1],[0,2,5]], source = 0, destination = 2, target = 6

  ### 📤 `Output`  ➤ []

  ### 🔦 `Explanation` ➤  The graph above contains the initial edges. It is not possible to make the distance from 0 to 2 equal to 6 by modifying the edge with weight -1. So, an empty array is returned.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![2699 que 3](https://github.com/user-attachments/assets/7a0118ce-d0b9-41f7-b767-7f78185b0639)

  ### 📥 `Input` ➤ n = 4, edges = [[1,0,4],[1,2,3],[2,3,5],[0,3,-1]], source = 0, destination = 2, target = 6

  ### 📤 `Output`  ➤ [[1,0,4],[1,2,3],[2,3,5],[0,3,1]]

  ### 🔦 `Explanation`  ➤ The graph above shows a modified graph having the shortest distance from 0 to 2 as 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 100`** </br>

🔹 **`1 <= edges.length <= n * (n - 1) / 2`** </br>

🔹 **`edges[i].length == 3`** </br>

🔹 **0 <= a<sub>i</sub>, b<sub>i</sub> < n** </br>

🔹 **w<sub>i</sub> = -1 or 1 <= w<sub>i</sub> <= 10<sup>7</sup>** </br>

🔹 **a<sub>i</sub> != b<sub>i</sub>** </br>

🔹 **`0 <= source, destination < n`** </br>

🔹 **`source != destination`** </br>

🔹 **1 <= target <= 10<sup>9</sup>** </br>

🔹 **The graph is connected, and there are no self-loops or repeated edges** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Graph**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/30%20-%2008%20-%202024%20---%202699.%20Modify%20Graph%20Edge%20Weights%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2699-ModifyGraphEdgeWeights.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/30%20-%2008%20-%202024%20---%202699.%20Modify%20Graph%20Edge%20Weights%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2699-ModifyGraphEdgeWeights.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/30%20-%2008%20-%202024%20---%202699.%20Modify%20Graph%20Edge%20Weights%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2699-ModifyGraphEdgeWeights.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/30%20-%2008%20-%202024%20---%202699.%20Modify%20Graph%20Edge%20Weights%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2699-ModifyGraphEdgeWeights.js) |

