# 2872. Maximum Number of K-Divisible Components

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-k-divisible-components/description/?envType=daily-question&envId=2024-12-21"><strong>➥ 🫀 2872 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is an undirected tree with `n` nodes labeled from `0` to `n - 1`. You are given the integer `n` and a 2D integer array `edges` of length `n - 1`, where edges[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that there is an edge between nodes a<sub>i</sub> and b<sub>i</sub> in the tree.

### You are also given a 0-indexed integer array `values` of length n, where `values[i]` is the value associated with the i<sup>th</sup> node, and an integer `k`.

### A `valid split` of the tree is obtained by removing any set of edges, possibly empty, from the tree such that the resulting components all have values that are divisible by k, where the value of a connected component is the sum of the values of its nodes.

### Return *the maximum number of components in any `valid split`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2872 que 1](https://github.com/user-attachments/assets/d6450a62-aa51-4e29-a313-3aeb4cba526b)

  ### 📥 `Input`  ➤ n = 5, edges = [[0,2],[1,2],[1,3],[2,4]], values = [1,8,1,4,4], k = 6

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ We remove the edge connecting node 1 with 2. The resulting split is valid because:

➺ The value of the component containing nodes 1 and 3 is values[1] + values[3] = 12.

➺ The value of the component containing nodes 0, 2, and 4 is values[0] + values[2] + values[4] = 6.

It can be shown that no other valid split has more than 2 connected components.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2872 que 2](https://github.com/user-attachments/assets/ab7bfaa6-80ce-4be0-b291-ed5ed6aee529)

  ### 📥 `Input` ➤  n = 7, edges = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]], values = [3,0,6,1,5,2,1], k = 3

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ We remove the edge connecting node 0 with 2, and the edge connecting node 0 with 1. The resulting split is valid because:

➺ The value of the component containing node 0 is values[0] = 3.

➺ The value of the component containing nodes 2, 5, and 6 is values[2] + values[5] + values[6] = 9.

➺ The value of the component containing nodes 1, 3, and 4 is values[1] + values[3] + values[4] = 6.

It can be shown that no other valid split has more than 3 connected components.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n <= 3 * 10<sup>4</sup>** </br>

🔹 **`edges.length == n - 1`** </br>

🔹 **`edges[i].length == 2`** </br>

🔹 **0 <= a<sub>i</sub>, b<sub>i</sub> < n** </br>

🔹 **`values.length == n`** </br>

🔹 **0 <= values[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 109** </br>

🔹 **Sum of values is divisible by `k`.** </br>

🔹 **The input is generated such that `edges` represents a valid tree.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/21%20-%2012%20-%202024%20---%202872.%20Maximum%20Number%20of%20K-Divisible%20Components%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202872.%20Maximum%20Number%20of%20K-Divisible%20Components.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/21%20-%2012%20-%202024%20---%202872.%20Maximum%20Number%20of%20K-Divisible%20Components%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202872.%20Maximum%20Number%20of%20K-Divisible%20Components.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/21%20-%2012%20-%202024%20---%202872.%20Maximum%20Number%20of%20K-Divisible%20Components%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202872.%20Maximum%20Number%20of%20K-Divisible%20Components.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/21%20-%2012%20-%202024%20---%202872.%20Maximum%20Number%20of%20K-Divisible%20Components%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202872.%20Maximum%20Number%20of%20K-Divisible%20Components.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8650ea14-d799-46d7-9414-d32a78af6039" width = "700px" height="462px" />

</h1>
