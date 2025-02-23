# 889. Construct Binary Tree from Preorder and Postorder Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/description/?envType=daily-question&envId=2025-02-23"><strong>➥ ☢️ 889 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two integer arrays, **preorder** and **postorder**, where:

🔹 **preorder** is the **preorder traversal** of a binary tree of **distinct values**. </br>
🔹 **postorder** is the **postorder traversal** of the **same** binary tree. </br>

### Reconstruct and return the **binary tree**.

📌 **If multiple answers exist, return any of them.**

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c6f8b9f3-fd42-49de-a31d-267a9802625b" width="304px" height="265px"/>

  ### 📥 `Input`  ➤ preorder = [1,2,4,5,3,6,7], postorder = [4,5,2,6,7,3,1]

  ### 📤 `Output`  ➤ [1,2,3,4,5,6,7]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ preorder = [1], postorder = [1]

  ### 📤 `Output`  ➤ [1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= preorder.length <= 30`** </br>
🔹 **`1 <= preorder[i] <= preorder.length`** </br>
🔹 **All values in `preorder` are unique.** </br>
🔹 **`postorder.length == preorder.length`** </br>
🔹 **`1 <= postorder[i] <= postorder.lengt`h** </br>
🔹 **All values in `postorder` are unique.** </br>
🔹 **It is guaranteed that `preorder` and `postorder` are the traversals of the same binary tree.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Divide and Conquer**  </br>
🔸 **Tree**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/23%20-%2002%20-%202025%20---%20889.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20889.%20Construct%20Binary%20Tree%20from%20Preorder.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/23%20-%2002%20-%202025%20---%20889.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20889.%20Construct%20Binary%20Tree%20from%20Preorder%20a.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/23%20-%2002%20-%202025%20---%20889.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20889.%20Construct%20Binary%20Tree%20from%20Preorder.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/23%20-%2002%20-%202025%20---%20889.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20889.%20Construct%20Binary%20Tree%20from%20Preo.js) |

