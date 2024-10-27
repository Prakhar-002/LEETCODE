# 951. Flip Equivalent Binary Trees

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/flip-equivalent-binary-trees/description/?envType=daily-question&envId=2024-10-26"><strong>➥ ☢️ 951 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### For a binary tree `T`, we can define a `flip operation` as follows: choose any node, and swap the left and right child subtrees.

### A binary tree `X` is flip equivalent to a binary tree `Y` if and only if we can make `X` equal to `Y` after some number of flip operations.

### Given the roots of two binary trees `root1` and `root2`, return `true` if the two trees are flip equivalent or `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![951 que 1](https://github.com/user-attachments/assets/bd1ef424-dd1a-4dc7-913c-b333b474344a)

  ### 📥 `Input`  ➤  root1 = [1,2,3,4,5,6,null,null,null,7,8], root2 = [1,3,2,null,6,4,5,null,null,null,null,8,7]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ We flipped at nodes with values 1, 3, and 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root1 = [], root2 = []

  ### 📤 `Output`  ➤ true

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root1 = [], root2 = [1]

  ### 📤 `Output`  ➤ false

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in each tree is in the range `[0, 100]`.** </br>

🔹 **Each tree will have unique node values in the range `[0, 99]`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/24%20-%2010%20-%202024%20---%20951.%20Flip%20Equivalent%20Binary%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20951.%20Flip%20Equivalent%20Binary%20Trees.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/24%20-%2010%20-%202024%20---%20951.%20Flip%20Equivalent%20Binary%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20951.%20Flip%20Equivalent%20Binary%20Trees.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/24%20-%2010%20-%202024%20---%20951.%20Flip%20Equivalent%20Binary%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20951.%20Flip%20Equivalent%20Binary%20Trees.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/24%20-%2010%20-%202024%20---%20951.%20Flip%20Equivalent%20Binary%20Trees%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20951.%20Flip%20Equivalent%20Binary%20Trees.js) |



