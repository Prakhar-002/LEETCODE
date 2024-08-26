# 589. N-ary Tree Preorder Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/n-ary-tree-preorder-traversal/description/"><strong>➥ ♻️ 589 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of an n-ary tree, return *the preorder traversal of its nodes' values*.

### Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷


![589 que 1](https://github.com/user-attachments/assets/557b5910-e300-4aa2-beec-2b7bfd603857)

  ### 📥 `Input`  ➤ root = [1,null,3,2,4,null,5,6]

  ### 📤 `Output`  ➤ [1,3,5,6,2,4]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![589 que 2](https://github.com/user-attachments/assets/590f5093-a1ac-4920-a6b4-b3b734f9f44e)

  ### 📥 `Input` ➤ root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]

  ### 📤 `Output`  ➤ [1,2,3,6,7,11,14,4,8,12,5,9,13,10]


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [0, 10<sup>4</sup>].** </br>

🔹 **0 <= Node.val <= 10<sup>4</sup>** </br>

🔹 **The height of the n-ary tree is less than or equal to `1000`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Stack**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20589.%20N-ary%20Tree%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-589-N-aryTreePreorderTraversal.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20589.%20N-ary%20Tree%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-589-N-aryTreePreorderTraversal.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20589.%20N-ary%20Tree%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-589-N-aryTreePreorderTraversal.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20589.%20N-ary%20Tree%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-589-N-aryTreePreorderTraversal.js) |

