# 701. Insert into a Binary Search Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insert-into-a-binary-search-tree/description/"><strong>➥ ☢️ 701 Leetcode Que Medium ☢️ </strong></a> 
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is `guaranteed` that the new value does not exist in the original BST.

### `Notice` that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return `any of them`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![701 que 1 img 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/37acdfc6-572b-4a76-a88e-a5fc57fbdc40)

  ### Input  ➤ root = [4,2,7,1,3], val = 5

  ### Output  ➤ [4,2,7,1,3,5]

  ### Explanation  ➤ Another accepted tree is:

  ![701 que 1 img 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/b32c57bb-60d9-4af3-ad2f-d4b1238d23d2)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ root = [40,20,60,10,30,50,70], val = 25

  ### Output  ➤ [40,20,60,10,30,50,70,null,null,25]


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ root = [4,2,7,1,3,null,null,null,null,null,null], val = 5

  ### Output  ➤ [4,2,7,1,3,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree will be in the range `[0, 10^4]`.**
- **-10^8 <= Node.val <= 10^8**
- **All the values Node.val are `unique`.**
- **-10^8 <= val <= 10^8**
- **It's `guaranteed` that val does not exist in the original BST.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Binary Search Tree**
3. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20701.%20Insert%20into%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_701_InsertIntoABinarySearchTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20701.%20Insert%20into%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_701_InsertIntoABinarySearchTree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20701.%20Insert%20into%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_701_InsertIntoABinarySearchTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20701.%20Insert%20into%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_701_InsertIntoABinarySearchTree.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20701.%20Insert%20into%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_701_InsertIntoABinarySearchTree.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f2ae3d9e-00f2-4acd-aa06-85cc7eb9571f" width = "700px" height="462px" />

</h1>
