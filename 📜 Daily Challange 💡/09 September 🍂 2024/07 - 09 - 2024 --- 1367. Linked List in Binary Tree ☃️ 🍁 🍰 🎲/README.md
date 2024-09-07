# 1367. Linked List in Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/linked-list-in-binary-tree/description/?envType=daily-question&envId=2024-09-07"><strong>➥ ☢️ 1367 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary tree `root` and a linked list with `head` as the first node. 

### Return ➺ True if all the elements in the linked list starting from the `head` *correspond to some downward path* connected in the binary tree otherwise return ➺ False.

### In this context downward path means a path that starts at some node and goes downwards.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1367 que 1](https://github.com/user-attachments/assets/95f4488d-590f-4d71-ab08-d9354dfb9904)

  ### 📥 `Input`  ➤ head = [4,2,8], root = [1,4,4,null,2,2,null,1,null,6,8,null,null,null,null,1,3]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ Nodes in blue form a subpath in the binary Tree. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1367 que 2](https://github.com/user-attachments/assets/1ea5d281-9779-489e-81f4-f76e361d04a3)

  ### 📥 `Input` ➤ head = [1,4,2,6], root = [1,4,4,null,2,2,null,1,null,6,8,null,null,null,null,1,3]

  ### 📤 `Output`  ➤ true

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ head = [1,4,2,6,8], root = [1,4,4,null,2,2,null,1,null,6,8,null,null,null,null,1,3]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ There is no path in the binary tree that contains all the elements of the linked list from `head`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree will be in the range `[1, 2500]`.** </br>

🔹 **The number of nodes in the list will be in the range `[1, 100]`.** </br>

🔹 **`1 <= Node.val <= 100` for each node in the linked list and binary tree.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/07%20-%2009%20-%202024%20---%201367.%20Linked%20List%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1367-LinkedListInBinaryTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/07%20-%2009%20-%202024%20---%201367.%20Linked%20List%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1367-LinkedListInBinaryTree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/07%20-%2009%20-%202024%20---%201367.%20Linked%20List%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1367-LinkedListInBinaryTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/07%20-%2009%20-%202024%20---%201367.%20Linked%20List%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1367-LinkedListInBinaryTree.js) |
