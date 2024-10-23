# 2641. Cousins in Binary Tree II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/cousins-in-binary-tree-ii/description/?envType=daily-question&envId=2024-10-23"><strong>➥ ☢️ 2641 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the root of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

### Two nodes of a binary tree are cousins if they have the same depth with different parents.

### Return the root of the modified tree.

### Note that the depth of a node is the number of edges in the path from the root node to it.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2641 que 1](https://github.com/user-attachments/assets/b64b7700-1cfe-4bc9-aec5-acba2a0c452d)

  ### 📥 `Input`  ➤ root = [5,4,9,1,10,null,7]

  ### 📤 `Output`  ➤ [0,0,0,7,7,null,11]

  ### 🔦 `Explanation`  ➤ The diagram above shows the initial binary tree and the binary tree after changing the value of each node.

    ➺ Node with value 5 does not have any cousins so its sum is 0.
    ➺ Node with value 4 does not have any cousins so its sum is 0.
    ➺ Node with value 9 does not have any cousins so its sum is 0.
    ➺ Node with value 1 has a cousin with value 7 so its sum is 7.
    ➺ Node with value 10 has a cousin with value 7 so its sum is 7.
    ➺ Node with value 7 has cousins with values 1 and 10 so its sum is 11.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2641 que 2](https://github.com/user-attachments/assets/beb8c82b-4764-4540-9b61-8f9e6da5a404)

  ### 📥 `Input` ➤ root = [3,1,2]

  ### 📤 `Output`  ➤ [0,0,0]

  ### 🔦 `Explanation` ➤ The diagram above shows the initial binary tree and the binary tree after changing the value of each node.

    ➺ Node with value 3 does not have any cousins so its sum is 0.
    ➺ Node with value 1 does not have any cousins so its sum is 0.
    ➺ Node with value 2 does not have any cousins so its sum is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [1, 10<sup>5</sup>].** </br>

🔹 **1 <= Node.val <= 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/23%20-%2010%20-%202024%20---%202641.%20Cousins%20in%20Binary%20Tree%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202641.%20Cousins%20in%20Binary%20Tree%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/23%20-%2010%20-%202024%20---%202641.%20Cousins%20in%20Binary%20Tree%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202641.%20Cousins%20in%20Binary%20Tree%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/23%20-%2010%20-%202024%20---%202641.%20Cousins%20in%20Binary%20Tree%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202641.%20Cousins%20in%20Binary%20Tree%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/23%20-%2010%20-%202024%20---%202641.%20Cousins%20in%20Binary%20Tree%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202641.%20Cousins%20in%20Binary%20Tree%20II.js) |
