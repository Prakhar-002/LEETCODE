# 590. N-ary Tree Postorder Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/?envType=daily-question&envId=2024-08-26"><strong>➥ ♻️ 590 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of an n-ary tree, return *the postorder traversal of its nodes' values*.

### Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![590 que 1](https://github.com/user-attachments/assets/557b5910-e300-4aa2-beec-2b7bfd603857)

  ### 📥 `Input`  ➤ root = [1,null,3,2,4,null,5,6]

  ### 📤 `Output`  ➤ [5,6,3,2,4,1]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![590 que 2](https://github.com/user-attachments/assets/590f5093-a1ac-4920-a6b4-b3b734f9f44e)

  ### 📥 `Input` ➤  root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]

  ### 📤 `Output`  ➤  [2,6,14,11,7,3,12,8,4,13,9,10,5,1]

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/26%20-%2008%20-%202024%20---%20590.%20N-ary%20Tree%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-590-N-aryTreePostorderTraversal.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/26%20-%2008%20-%202024%20---%20590.%20N-ary%20Tree%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-590-N-aryTreePostorderTraversal.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/26%20-%2008%20-%202024%20---%20590.%20N-ary%20Tree%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-590-N-aryTreePostorderTraversal.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/26%20-%2008%20-%202024%20---%20590.%20N-ary%20Tree%20Postorder%20Traversal%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-590-N-aryTreePostorderTraversal.js) |

