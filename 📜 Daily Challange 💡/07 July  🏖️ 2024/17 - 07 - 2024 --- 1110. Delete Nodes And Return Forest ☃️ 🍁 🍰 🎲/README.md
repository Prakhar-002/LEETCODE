# 1110. Delete Nodes And Return Forest

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-nodes-and-return-forest/description/?envType=daily-question&envId=2024-07-17"><strong>➥ ☢️ 1110 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of a binary tree, each node in the tree has a distinct value.

### After deleting all nodes with a value in `to_delete`, we are left with a forest (a disjoint union of trees).

### Return the roots of the trees in the remaining forest. You may return the result in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="286" alt="1110 que 1" src="https://github.com/user-attachments/assets/bf9f7fb2-8835-4450-954c-ffb0c54f53ba">

  ### 📥 Input  ➤ root = [1,2,3,4,5,6,7], to_delete = [3,5]

  ### 📤 Output  ➤ [[1,2,null,4],[6],[7]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ root = [1,2,4,null,3], to_delete = [3]

  ### 📤 Output  ➤  [[1,2,4]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **he number of nodes in the given tree is at most `1000`.** </br>
🔹 **Each node has a distinct value between `1` and `1000`.** </br>
🔹 **`to_delete.length <= 1000`** </br>
🔹 **`to_delete` contains distinct values between `1` and `1000`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/17%20-%2007%20-%202024%20---%201110.%20Delete%20Nodes%20And%20Return%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1110-DeleteNodesAndReturnForest.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/17%20-%2007%20-%202024%20---%201110.%20Delete%20Nodes%20And%20Return%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1110-DeleteNodesAndReturnForest.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/17%20-%2007%20-%202024%20---%201110.%20Delete%20Nodes%20And%20Return%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1110-DeleteNodesAndReturnForest.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/17%20-%2007%20-%202024%20---%201110.%20Delete%20Nodes%20And%20Return%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1110-DeleteNodesAndReturnForest.js) |
