# 124. Binary Tree Maximum Path Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/binary-tree-maximum-path-sum/description/"><strong>➥ 🫀 124 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree. The task is to return the maximum path sum of *any* non-empty path within the tree.

Key Definitions:

- A *path* in a binary tree is a sequence of nodes where there is an edge connecting each pair of adjacent nodes in the sequence.
- A node can appear in the sequence at most *once*.
- Importantly, the path *does not* need to pass through the root node.
- The *path sum* is simply the sum of the node values within a path.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![124 que 1](https://github.com/user-attachments/assets/6aa78a0f-47af-46aa-bbdf-1b918d2c54d7)

  ### 📥 `Input`  ➤ root = [1,2,3]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![124 que 2](https://github.com/user-attachments/assets/7d8230e8-5e27-4a62-9e5b-24e6fd8b62d8)

  ### 📥 `Input` ➤ root = [-10,9,20,null,null,15,7]

  ### 📤 `Output`  ➤ 42

  ### 🔦 `Explanation` ➤ The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the tree is in the range [1, 3 * 10<sup>4</sup>]. </br>

🔹 -1000 <= Node.val <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>

🔸 **Tree**  </br>

🔸 **Depth-First Search**  </br>

🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2059%20%F0%9F%A5%A1%20124.%20Binary%20Tree%20Maximum%20Path%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20124.%20Binary%20Tree%20Maximum%20Path%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2059%20%F0%9F%A5%A1%20124.%20Binary%20Tree%20Maximum%20Path%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20124.%20Binary%20Tree%20Maximum%20Path%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2059%20%F0%9F%A5%A1%20124.%20Binary%20Tree%20Maximum%20Path%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20124.%20Binary%20Tree%20Maximum%20Path%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2059%20%F0%9F%A5%A1%20124.%20Binary%20Tree%20Maximum%20Path%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20124.%20Binary%20Tree%20Maximum%20Path%20Sum.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/91d7e4e2-0c2e-4330-ab0e-928830cfcaac" width = "700px" height="462px" />

</h1>
