# 102. Binary Tree Level Order Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/binary-tree-level-order-traversal/description/"><strong>➥ ☢️ 102 Leetcode Que Medium ☢️ </strong></a> 
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of a binary tree, return *the level order traversal of its nodes' values. (i.e., from left to right, level by level)*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![102](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/2da3b635-1962-437b-9d8e-e952d80f9486)

  ### Input  ➤ root = [3,9,20,null,null,15,7]

  ### Output  ➤ [[3],[9,20],[15,7]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ root = [1]

  ### Output ➤ [[1]]


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ root = []

  ### Output  ➤ []

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range [0, 2000].**
- **-1000 <= Node.val <= 1000**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Breadth-First Search**
3. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20102.%20Binary%20Tree%20Level%20Order%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_102_BinaryTreeLevelOrderTraversa.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20102.%20Binary%20Tree%20Level%20Order%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_102_BinaryTreeLevelOrderTraversa.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20102.%20Binary%20Tree%20Level%20Order%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_102_BinaryTreeLevelOrderTraversa.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20102.%20Binary%20Tree%20Level%20Order%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_102_BinaryTreeLevelOrderTraversal.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4d60ad45-effb-412a-b26e-594fe3c145e3" width = "700px" height="462px" />

</h1>
