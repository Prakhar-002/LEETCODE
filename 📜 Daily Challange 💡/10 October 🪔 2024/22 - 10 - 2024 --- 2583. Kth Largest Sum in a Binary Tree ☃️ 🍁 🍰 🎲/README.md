# 2583. Kth Largest Sum in a Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/?envType=daily-question&envId=2024-10-22"><strong>➥ ☢️ 2583 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree and a positive integer `k`.

### The `level sum` in the tree is the sum of the values of the nodes that are on the `same` level.

### Return *the `k-th` largest level sum in the tree (not necessarily distinct)*. If there are fewer than `k` levels in the tree, return `-1`.

### `Note` that two nodes are on the same level if they have the same distance from the root.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2583 que 1](https://github.com/user-attachments/assets/d7788bdc-6395-4942-b4c4-e1a717dcd04c)

  ### 📥 `Input`  ➤ root = [5,8,9,2,1,3,7,4,6], k = 2

  ### 📤 `Output`  ➤ 13

  ### 🔦 `Explanation`  ➤ he level sums are the following:

    ➺ Level 1: 5.
    ➺ Level 2: 8 + 9 = 17.
    ➺ Level 3: 2 + 1 + 3 + 7 = 13.
    ➺ Level 4: 4 + 6 = 10.
    The 2nd largest level sum is 13.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2583 que 2](https://github.com/user-attachments/assets/773b59e9-3563-4c8f-ac9a-8485f7eeaa93)

  ### 📥 `Input` ➤ root = [1,2,null,3], k = 1

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The largest level sum is 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is `n`.** </br>

🔹 **2 <= n <= 10<sup>5</sup>** </br>

🔹 **1 <= Node.val <= 10<sup>6</sup>** </br>

🔹 **`1 <= k <= n`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Sorting**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/22%20-%2010%20-%202024%20---%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/22%20-%2010%20-%202024%20---%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/22%20-%2010%20-%202024%20---%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/22%20-%2010%20-%202024%20---%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202583.%20Kth%20Largest%20Sum%20in%20a%20Binary%20Tree.js) |


