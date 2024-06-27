# 979. Distribute Coins in Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/distribute-coins-in-binary-tree/?envType=daily-question&envId=2024-05-17"><strong>➥ ☢️ 979 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree with `n` nodes where each `node` in the tree has `node.val` coins. There are `n` coins in total throughout the whole tree.

### In one move, we may choose two adjacent nodes and move one coin from one node to another. A move may be from parent to child, or from child to parent.

### Return *the `minimum` number of moves required to make every node have `exactly` one coin*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![979 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/7778f38e-9389-43a4-bde2-2b618ae38dce)

  ### Input  ➤  root = [3,0,0]

  ### Output  ➤ 2

  ### Explanation  ➤ From the root of the tree, we move one coin to its left child, and one coin to its right child.


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![979 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/434d272b-0d3d-4aaa-b470-89967c835591)

  ### Input ➤ root = [0,3,0]

  ### Output  ➤ 3

  ### Explanation ➤ From the left child of the root, we move two coins to the root [taking two moves]. Then, we move one coin from the root of the tree to the right child.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is n.**
- **1 <= n <= 100**
- **0 <= Node.val <= n**
- **The sum of all Node.val is n**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Depth-First Search**
3. **Binary Tree**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/18%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20979.%20Distribute%20Coins%20in%20Binary%20Tree%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%81JAVA_979DistributeCoinsInBinaryTree.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/18%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20979.%20Distribute%20Coins%20in%20Binary%20Tree%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_979DistributeCoinsInBinaryTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/18%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20979.%20Distribute%20Coins%20in%20Binary%20Tree%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_979DistributeCoinsInBinaryTree.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/18%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20979.%20Distribute%20Coins%20in%20Binary%20Tree%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%92%96C_979DistributeCoinsInBinaryTree.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/distribute-coins-in-binary-tree/solutions/5174766/beats-100-java-100-js-python-c-beggar-coin-principle-postorder-only)  |
