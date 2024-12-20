# 2415. Reverse Odd Levels of Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/?envType=daily-question&envId=2024-12-20"><strong>➥ ☢️ 2415 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of a `perfect` binary tree, reverse the node values at each `odd` level of the tree.

- For example, suppose the node values at level 3 are `[2,1,3,4,7,11,29,18]`, then it should become `[18,29,11,7,4,3,1,2]`.

### Return *the root of the reversed tree*.

### A binary tree is `perfect` if all parent nodes have two children and all leaves are on the same level.

### The `level` of a node is the number of edges along the path between it and the root node.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  root = [2,3,5,8,13,21,34]

  ### 📤 `Output`  ➤  [2,5,3,8,13,21,34]

  ### 🔦 `Explanation`  ➤ ➺The tree has only one odd level. </br> The nodes at level 1 are 3, 5 respectively, which are reversed and become 5, 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [7,13,11]

  ### 📤 `Output`  ➤ [7,11,13]

  ### 🔦 `Explanation` ➤ The nodes at level 1 are 13, 11, which are reversed and become 11, 13.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [0,1,2,0,0,0,0,1,1,1,1,2,2,2,2]

  ### 📤 `Output`  ➤ [0,2,1,0,0,0,0,2,2,2,2,1,1,1,1]

  ### 🔦 `Explanation`  ➤ The odd levels have non-zero values. </br> The nodes at level 1 were 1, 2, and are 2, 1 after the reversal. </br> The nodes at level 3 were 1, 1, 1, 1, 2, 2, 2, 2, and are 2, 2, 2, 2, 1, 1, 1, 1 after the reversal.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [1, 2<sup>14</sup>].** </br>

🔹 **0 <= Node.val <= 10<sup>5</sup>** </br>

🔹 **`root` is a perfect binary tree.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
