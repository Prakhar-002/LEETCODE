# 2196. Create Binary Tree From Descriptions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/create-binary-tree-from-descriptions/description/?envType=daily-question&envId=2024-07-15"><strong>➥ ☢️ 2196 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `descriptions` where `descriptions[i] = [parent-i, child-i, isLeft-i]` indicates that `parent-i` is the parent of `child-i` in a `binary` tree of `unique` values. Furthermore,

- If `isLeft-i == 1`, then `child-i` is the left child of `parent-i`.

- If `isLeft-i == 0`, then `child-i` is the right child of `parent-i`.

### Construct the binary tree described by `descriptions` and return *its `root`*.

### The test cases will be generated such that the binary tree is `valid`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2196 que 1](https://github.com/user-attachments/assets/c01b0e5c-54e9-4a5a-8a3f-3ba5055b3f23)

  ### 📥 Input  ➤ descriptions = [[20,15,1],[20,17,0],[50,20,1],[50,80,0],[80,19,1]]

  ### 📤 Output  ➤ [50,20,80,15,17,19]

  ### 🔦 Explanation  ➤ The root node is the node with value 50 since it has no parent.</br> The resulting binary tree is shown in the diagram.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2196 que 2](https://github.com/user-attachments/assets/ac2b8b63-48a2-452e-a68b-4634522d82b6)

  ### 📥 Input ➤ descriptions = [[1,2,1],[2,3,0],[3,4,1]]

  ### 📤 Output  ➤ [1,2,null,null,3,4]

  ### 🔦 Explanation ➤ The root node is the node with value 1 since it has no parent.</br> The resulting binary tree is shown in the diagram.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= descriptions.length <= 10<sup>4</sup>** </br>
🔹 **descriptions[i].length == 3** </br>
🔹 **1 <= parent-i, child-i <= 10<sup>5</sup>** </br>
🔹 **0 <= isLeft-i <= 1** </br>
🔹 **The binary tree described by `descriptions` is valid.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Tree**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/15%20-%2007%20-%202024%20---%202196.%20Create%20Binary%20Tree%20From%20Descriptions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2196-CreateBinaryTreeFromDescriptions.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/15%20-%2007%20-%202024%20---%202196.%20Create%20Binary%20Tree%20From%20Descriptions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2196-CreateBinaryTreeFromDescriptions.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/15%20-%2007%20-%202024%20---%202196.%20Create%20Binary%20Tree%20From%20Descriptions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2196-CreateBinaryTreeFromDescriptions.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/15%20-%2007%20-%202024%20---%202196.%20Create%20Binary%20Tree%20From%20Descriptions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2196-CreateBinaryTreeFromDescriptions.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/99b18f1c-db34-46fe-b7db-455fe94fc3ac" width = "700px" height="462px" />

</h1>
