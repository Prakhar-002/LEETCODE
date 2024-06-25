# 1038. Binary Search Tree to Greater Sum Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/?envType=daily-question&envId=2024-06-25"><strong>➥ ☢️ 1038 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

### As a reminder, a binary search tree is a tree that satisfies these constraints :

- The left subtree of a node contains only nodes with keys less than the node's key.

- The right subtree of a node contains only nodes with keys greater than the node's key.

- Both the left and right subtrees must also be binary search trees.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1038 que](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/b8077290-bbbc-48e0-9205-3cc41ed159b2)


  ### Input  ➤ root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]

  ### Output  ➤ [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ root = [0,null,1]

  ### Output  ➤ [1,null,1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range `[1, 100]`**
- **0 <= Node.val <= 100**
- **All the values in the tree are `unique`.**

</br>

# Note 📝 ˋ°•*⁀➷ 

  ### This question is the same as 538 ➤  [Question No 538](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20538.%20Convert%20BST%20to%20Greater%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2)

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Depth-First Search**
3. **Binary Search Tree**
4. **Binary Tree**

</br>


# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/25%20-%2006%20-%202024%20---%201038.%20Binary%20Search%20Tree%20to%20Greater%20Sum%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1038_BinarySearchTreeToGreaterSumTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/25%20-%2006%20-%202024%20---%201038.%20Binary%20Search%20Tree%20to%20Greater%20Sum%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_1038_BinarySearchTreeToGreaterSumTree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/25%20-%2006%20-%202024%20---%201038.%20Binary%20Search%20Tree%20to%20Greater%20Sum%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1038_BinarySearchTreeToGreaterSumTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/25%20-%2006%20-%202024%20---%201038.%20Binary%20Search%20Tree%20to%20Greater%20Sum%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1038_BinarySearchTreeToGreaterSumTree.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/25%20-%2006%20-%202024%20---%201038.%20Binary%20Search%20Tree%20to%20Greater%20Sum%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_1038_BinarySearchTreeToGreaterSumTree.c)  |