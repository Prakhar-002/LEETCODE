# 3203. Find Minimum Diameter After Merging Two Trees

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/description/?envType=daily-question&envId=2024-12-24"><strong>➥ 🫀 3203 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There exist two undirected trees with `n` and `m` nodes, numbered from `0` to `n - 1` and from `0` to `m - 1`, respectively. You are given two 2D integer arrays `edges1` and edges2 of lengths `n - 1` and `m - 1`, respectively, where edges1[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that there is an edge between nodes a<sub>i</sub> and b<sub>i</sub> in the first tree and edges2[i] = [u<sub>i</sub>, v<sub>i</sub>] indicates that there is an edge between nodes u<sub>i</sub> and v<sub>i</sub> in the second tree.

### You must connect one node from the first tree with another node from the second tree with an edge.

### Return *the minimum possible diameter of the resulting tree*.

### The `diameter` of a tree is the length of the longest path between any two nodes in the tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/e210f854-6c6d-4600-8b6f-4235ae4a947b" width="500" height="250" alt="3203 Que 1">

  ### 📥 `Input`  ➤ edges1 = [[0,1],[0,2],[0,3]], edges2 = [[0,1]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ We can obtain a tree of diameter 3 by connecting node 0 from the first tree with any node from the second tree.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/e04f77eb-d70b-498d-b869-0eeb1e9153af" width="500" height="250" alt="3203 Que 2">

  ### 📥 `Input` ➤ edges1 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]], edges2 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ We can obtain a tree of diameter 5 by connecting node 0 from the first tree with node 0 from the second tree.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n, m <= 10<sup>5</sup>** </br>

🔹 **`edges1.length == n - 1`** </br>

🔹 **`edges2.length == m - 1`** </br>

🔹 **`edges1[i].length == edges2[i].length == 2`** </br>

🔹 **edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]** </br>

🔹 **0 <= a<sub>i</sub>, b<sub>i</sub> < n** </br>

🔹 **edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]** </br>

🔹 **0 <= u<sub>i</sub>, v<sub>i</sub> < m** </br>

🔹 **The input is generated such that `edges1` and `edges2` represent valid trees.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/24%20-%2012%20-%202024%20---%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/24%20-%2012%20-%202024%20---%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/24%20-%2012%20-%202024%20---%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/24%20-%2012%20-%202024%20---%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203203.%20Find%20Minimum%20Diameter%20After%20Merging%20Two%20Trees.js) |
