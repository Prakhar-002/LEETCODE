# 1028. Recover a Tree From Preorder Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/?envType=daily-question&envId=2025-02-22"><strong>➥ 🫀 1028 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### We run a **preorder depth-first search (DFS)** on the root of a binary tree.

### At each node in this traversal, we output **D dashes** (where **D** is the depth of this node), then we output the **value** of this node.

### - If the depth of a node is `D`, the depth of its immediate child is `D + 1`.
### - The depth of the **root node** is `0`.
### - If a node has **only one child**, that child is **guaranteed** to be the left child.

### Given the output `traversal` of this traversal, *recover the tree and return its* `root`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/a96c5e87-2926-4d72-8c60-8c1a4c78eeea" width="423px" height="200px"/>

  ### 📥 `Input`  ➤ traversal = "1-2--3--4-5--6--7"

  ### 📤 `Output`  ➤ `[1,2,5,3,4,6,7]`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/69071bae-17c3-4e0c-929d-2a848821460a" width="432px" height="250px"/>

  ### 📥 `Input`  ➤ traversal = "1-2--3---4-5--6---7"

  ### 📤 `Output`  ➤ [1,2,5,3,null,6,null,4,null,7]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/d9856bf8-fbc2-41b5-972a-ce6fb4e7f95f" width="305px" height="250px"/>

  ### 📥 `Input`  ➤ traversal = "1-401--349---90--88"

  ### 📤 `Output`  ➤ [1,401,null,349,88,90]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the original tree is in the range `[1, 1000]`.** </br>

🔹 **1 <= Node.val <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/22%20-%2002%20-%202025%20---%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/22%20-%2002%20-%202025%20---%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/22%20-%2002%20-%202025%20---%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/22%20-%2002%20-%202025%20---%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal.js) |
