# 226. Invert Binary Tree

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 226 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree. Your task is to invert the tree (swap the left and right children of every node) and return the `root` of the inverted tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![226 que 1](https://github.com/user-attachments/assets/2e2d6e7c-a990-4e02-8e01-1338a0cc2bbd)

  ### 📥 `Input`  ➤ root = [4,2,7,1,3,6,9]

  ### 📤 `Output`  ➤ [4,7,2,9,6,3,1]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![226 que 2](https://github.com/user-attachments/assets/f23f1ed6-9626-49e8-b7ee-87da02f54630)

  ### 📥 `Input` ➤ root = [2,1,3]

  ### 📤 `Output`  ➤ [2,3,1]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = []

  ### 📤 `Output`  ➤ []

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the tree is in the range [0, 100]. </br>

🔹 -100 <= Node.val <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>

🔸 **Depth-First Search**  </br>

🔸 **Breadth-First Search**  </br>

🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2046%20%F0%9F%A5%A1%20226.%20Invert%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20226.%20Invert%20Binary%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2046%20%F0%9F%A5%A1%20226.%20Invert%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20226.%20Invert%20Binary%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2046%20%F0%9F%A5%A1%20226.%20Invert%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20226.%20Invert%20Binary%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2046%20%F0%9F%A5%A1%20226.%20Invert%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20226.%20Invert%20Binary%20Tree.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/21b8c6d8-6b07-470a-9fe8-3046b228ca6a" width = "700px" height="462px" />

</h1>
