# 1382. Balance a Binary Search Tree

</br> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/balance-a-binary-search-tree/description/?envType=daily-question&envId=2024-06-26"><strong>➥ ☢️ 1382 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of a binary search tree, return a `balanced` binary search tree with the same node values. If there is more than one answer, return `any of them`.

### A binary search tree is `balanced` if the depth of the two subtrees of every node never differs by more than `1`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1382 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/aa6e9881-57a6-48bf-ab49-0fec67257a65)

  ### Input  ➤ root = [1,null,2,null,3,null,4,null,null]

  ### Output  ➤ [2,1,3,null,null,null,4]

  ### Explanation  ➤ This is not the only correct answer, [3,1,4,null,2] is also correct.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1382 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/43a99cec-a079-4b89-914c-ef3a3b22b14f)

  ### Input ➤ root = [2,1,3]

  ### Output  ➤ [2,1,3]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range `[1, 104]`.**
- **1 <= Node.val <= 105**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Divide and Conquer**
2. **Greedy**
3. **Tree**
4. **Depth-First Search**
5. **Binary Search Tree**
6. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/26%20-%2006%20-%202024%20---%201382.%20Balance%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_1382_BalanceABinarySearchTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/26%20-%2006%20-%202024%20---%201382.%20Balance%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_1382_BalanceABinarySearchTree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/26%20-%2006%20-%202024%20---%201382.%20Balance%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_1382_BalanceABinarySearchTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/26%20-%2006%20-%202024%20---%201382.%20Balance%20a%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_1382_BalanceABinarySearchTree.js) |
