# 2322. Minimum Score After Removals on a Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/?envType=daily-question&envId=2025-07-24"><strong>➥ 🫀 2322 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an undirected, connected tree with `n` nodes, labeled from 0 to `n - 1`. You are also given a 0-indexed integer array `nums` of length `n`, where `nums[i]` represents the value of the i<sup>th</sup> node. The connections in the tree are defined by a 2D integer array `edges` of length `n - 1`, where `edges[i] = [ai, bi]` indicates an edge between nodes `ai` and `bi`.

### The problem requires you to remove *two distinct* edges from the tree, which will result in the formation of three connected components.

### For a given pair of removed edges, the following steps are performed:

1. Determine the nodes belonging to each of the three connected components.
2. Calculate the XOR of all node values within each component.
3. The "score" for that pair of removed edges is defined as the difference between the largest XOR value among the three components and the smallest XOR value.

### Your task is to return the *minimum* score possible among *any* valid pair of edge removals on the tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="372" height="366" alt="2322 que 1" src="https://github.com/user-attachments/assets/1775bd6c-fcc7-4834-be60-9ae7a96e6e34" />

  ### 📥 `Input`  ➤ nums = [1,5,5,4,11], edges = [[0,1],[1,2],[1,3],[3,4]]

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤ The diagram above shows a way to make a pair of removals.

- The 1st component has nodes [1,3,4] with values [5,4,11]. Its XOR value is 5 ^ 4 ^ 11 = 10.
- The 2nd component has node [0] with value [1]. Its XOR value is 1 = 1.
- The 3rd component has node [2] with value [5]. Its XOR value is 5 = 5.

The score is the difference between the largest and smallest XOR value which is 10 - 1 = 9.
It can be shown that no other pair of removals will obtain a smaller score than 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="451" height="236" alt="2322 que 2" src="https://github.com/user-attachments/assets/f607fbef-abfe-4d22-b742-14cb24bee0a4" />

  ### 📥 `Input` ➤ nums = [5,5,2,4,4,2], edges = [[0,1],[1,2],[5,2],[4,3],[1,3]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ The diagram above shows a way to make a pair of removals.

- The 1st component has nodes [3,4] with values [4,4]. Its XOR value is 4 ^ 4 = 0.
- The 2nd component has nodes [1,0] with values [5,5]. Its XOR value is 5 ^ 5 = 0.
- The 3rd component has nodes [2,5] with values [2,2]. Its XOR value is 2 ^ 2 = 0.

The score is the difference between the largest and smallest XOR value which is 0 - 0 = 0.
We cannot obtain a smaller score than 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == nums.length </br>

🔹 3 <= n <= 1000 </br>

🔹 1 <= nums[i] <= 10<sup>8</sup> </br>

🔹 edges.length == n - 1 </br>

🔹 edges[i].length == 2 </br>

🔹 0 <= ai, bi < n </br>

🔹 ai != bi </br>

🔹 edges represents a valid tree. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Tree**  </br>

🔸 **Depth-First Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/24%20-%2007%20-%202025%20---%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/24%20-%2007%20-%202025%20---%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/24%20-%2007%20-%202025%20---%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/24%20-%2007%20-%202025%20---%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202322.%20Minimum%20Score%20After%20Removals%20on%20a%20Tree.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fcefaa4d-a305-4865-b109-e0cf913a9ffb" width = "700px" height="462px" />

</h1>
