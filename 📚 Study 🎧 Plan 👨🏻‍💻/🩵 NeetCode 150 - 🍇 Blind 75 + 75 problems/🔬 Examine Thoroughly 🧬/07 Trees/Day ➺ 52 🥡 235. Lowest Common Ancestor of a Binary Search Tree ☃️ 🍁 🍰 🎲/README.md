# 235. Lowest Common Ancestor of a Binary Search Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/"><strong>➥ ☢️ 235 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

### According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow a node to be a descendant of itself).”

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/cad7004c-6139-44a1-a72a-0984050f8bcd" width="200px" height="190px" />

  ### 📥 `Input`  ➤ root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤  The LCA of nodes 2 and 8 is 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/1d4c8d99-61a8-49f8-853e-1b8e184e055b" width="200px" height="190px"/>

  ### 📥 `Input` ➤  root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [2,1], p = 2, q = 1

  ### 📤 `Output`  ➤ 2

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [2, 10<sup>5</sup>].** </br>

🔹 **-10<sup>9</sup> <= Node.val <= 10<sup>9</sup>** </br>

🔹 **All `Node.val` are unique.** </br>

🔹 **`p != q`** </br>

🔹 **`p` and `q` will exist in the BST.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Search Tree**  </br>
🔸 **Binary Tree**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ☢️ [236. Lowest Common Ancestor of a Binary Tree](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Binary%20Tree%20-%20DFS/Day%20%E2%9E%BA%2038%20%F0%9F%AA%BB%20236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b1a2b4a1-d416-4d4c-ad58-03817b202d0d" width = "700px" height="462px" />

</h1>
