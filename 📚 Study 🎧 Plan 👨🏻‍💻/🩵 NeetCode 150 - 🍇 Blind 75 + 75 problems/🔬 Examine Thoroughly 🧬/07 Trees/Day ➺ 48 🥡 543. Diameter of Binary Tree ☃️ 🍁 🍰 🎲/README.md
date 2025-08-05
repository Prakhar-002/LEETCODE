# 543. Diameter of Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/diameter-of-binary-tree/description/"><strong>➥ ☢️ 543 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree. Your task is to return the *length* of the *diameter* of the tree.

### The diameter of a binary tree is defined as the length of the longest path between any two nodes *within* the tree. Importantly, this path might or might not pass through the root node.

### The length of a path between two nodes is determined by counting the number of edges connecting those nodes.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/5b6fef45-6bbf-409f-a855-811c895a21d9" width="" height=""/>

  ### 📥 `Input`  ➤ root = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 3 is the length of the path [4,2,1,3] or [5,2,1,3].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [1,2]

  ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the tree is in the range [1, 10<sup>4</sup>]. </br>

🔹 -100 <= Node.val <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>

🔸 **Depth-First Search**  </br>

🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2048%20%F0%9F%A5%A1%20543.%20Diameter%20of%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20543.%20Diameter%20of%20Binary%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2048%20%F0%9F%A5%A1%20543.%20Diameter%20of%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20543.%20Diameter%20of%20Binary%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2048%20%F0%9F%A5%A1%20543.%20Diameter%20of%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20543.%20Diameter%20of%20Binary%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2048%20%F0%9F%A5%A1%20543.%20Diameter%20of%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20543.%20Diameter%20of%20Binary%20Tree.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
