# 106. Construct Binary Tree from Inorder and Postorder Traversal

</br>

<h2 align="center">  

<a href="https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/?envType=problem-list-v2&envId=dsa-sorting-plateau-divide-and-conquer"><strong>➥ ☢️ 106 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two integer arrays `inorder` and `postorder` where `inorder` is the inorder traversal of a binary tree and `postorder` is the postorder traversal of the same tree, construct and return *the binary tree*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![106 que](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/3a524bf2-5c16-4b89-9b05-b17bc2ea2014)


  ### Input ➤ inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]

  ### Output ➤ [3,9,20,null,null,15,7]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ inorder = [-1], postorder = [-1]

  ### Output ➤ [-1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= inorder.length <= 3000**
- **postorder.length == inorder.length**
- **-3000 <= inorder[i], postorder[i] <= 3000**
- **`inorder` and `postorder` consist of unique values.**
- **Each value of `postorder` also appears in `inorder`.**
- **`inorder` is `guaranteed` to be the inorder traversal of the tree.**
- **`postorder` is `guaranteed` to be the postorder traversal of the tree.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**
3. **Divide and Conquer**
4. **Tree**
5. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20106.%20Construct%20Binary%20Tree%20from%20Inorder%20%26%20Postorder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%81JAVA_106_ConstructBinaryTreeFrom_In_Postorder.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20106.%20Construct%20Binary%20Tree%20from%20Inorder%20%26%20Postorder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%B0PYTHON_106_ConstructBinaryTreeFrom_In_Postorder.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20106.%20Construct%20Binary%20Tree%20from%20Inorder%20%26%20Postorder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%E2%98%83%EF%B8%8FJAVASCRIPT_106_ConstructBinaryTreeFrom_In_Postorder.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
