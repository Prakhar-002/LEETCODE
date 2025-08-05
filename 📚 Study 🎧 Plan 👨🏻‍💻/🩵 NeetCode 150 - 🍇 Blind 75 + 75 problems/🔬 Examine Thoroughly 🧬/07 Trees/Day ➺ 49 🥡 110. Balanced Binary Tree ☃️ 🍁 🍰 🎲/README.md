# 110. Balanced Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/balanced-binary-tree/description/"><strong>➥ ♻️ 1438 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary tree, determine if it is height-balanced
.
### height-balanced ➤ A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![110 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/579a2328-04f1-48eb-8c9e-94e1321f51eb)

  ### Input  ➤ root = [3,9,20,null,null,15,7]

  ### Output  ➤ true

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![110 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/ad9218bc-7217-4145-ac94-e11cd3628ce4)

  ### Input ➤ root = [1,2,2,3,3,null,null,4,4]

  ### Output  ➤ false


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ root = []

  ### Output  ➤ true

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range [0, 5000].**
- **-10^4 <= Node.val <= 10^4**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Depth-First Search**
3. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2049%20%F0%9F%A5%A1%20110.%20Balanced%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_110_BalancedBinaryTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2049%20%F0%9F%A5%A1%20110.%20Balanced%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20110.%20Balanced%20Binary%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2049%20%F0%9F%A5%A1%20110.%20Balanced%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_110_BalancedBinaryTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Trees/Day%20%E2%9E%BA%2049%20%F0%9F%A5%A1%20110.%20Balanced%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20110.%20Balanced%20Binary%20Tree.cpp) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5c22fd9a-5ff3-40d1-a312-43d3aa76999f" width = "700px" height="462px" />

</h1>
