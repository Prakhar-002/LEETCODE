# 2322. Minimum Score After Removals on a Tree

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 2322 Leetcode Medium ☢️ </strong></a>
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

<img src="" width="" height=""/>

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

<img src="" width="" height=""/>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
