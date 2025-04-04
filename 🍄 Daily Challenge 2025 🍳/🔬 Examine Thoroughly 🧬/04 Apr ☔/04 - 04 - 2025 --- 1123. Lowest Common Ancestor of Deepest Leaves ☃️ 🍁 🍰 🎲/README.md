# 1123. Lowest Common Ancestor of Deepest Leaves

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/description/?envType=daily-question&envId=2025-04-04"><strong>➥ ☢️ 1123 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree. Your task is to return *the lowest common ancestor (LCA) of its deepest leaves*.

Recall the following definitions:

- **Leaf Node:** A node of a binary tree is a leaf if and only if it has no children (both left and right child are null).

- **Depth of Root:** The depth of the root of the tree is 0. If the depth of a node is `d`, then the depth of each of its children is `d + 1`.

- **Lowest Common Ancestor (LCA) of Deepest Leaves:** For a set `S` of the deepest leaf nodes in the tree, the LCA is the node `A` with the largest depth such that every node in `S` is within the subtree rooted at `A`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ root = [3,5,1,6,2,0,8,null,null,7,4]

  ### 📤 `Output`  ➤ [2,7,4]

  ### 🔦 `Explanation`  ➤ We return the node with value 2, colored in yellow in the diagram.
The nodes coloured in blue are the deepest leaf-nodes of the tree.
Note that nodes 6, 0, and 8 are also leaf nodes, but the depth of them is 2, but the depth of nodes 7 and 4 is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [1]

  ### 📤 `Output`  ➤ [1]

  ### 🔦 `Explanation` ➤ The root is the deepest node in the tree, and it's the lca of itself.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [0,1,3,null,2]

  ### 📤 `Output`  ➤ [2]

  ### 🔦 `Explanation`  ➤ The deepest leaf node in the tree is 2, the lca of one node is itself.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ root = [3,5,1,6,2,0,8,null,null,7,4,9,11]

  ### 📤 `Output`  ➤[2,7,4,9,11]

  ### 🔦 `Explanation`  ➤  Here 7,4,9 and 11 are deppest value. among this two deppest common ancestor 2 values are availbe for returning correct result

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the tree will be in the range `[1, 1000]`. </br>
🔹 `0 <= Node.val <= 1000` </br>
🔹 The values of the nodes in the tree are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ☢️ [865. Smallest Subtree with all the Deepest Nodes]() </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/04%20-%2004%20-%202025%20---%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/04%20-%2004%20-%202025%20---%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/04%20-%2004%20-%202025%20---%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/04%20-%2004%20-%202025%20---%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201123.%20Lowest%20Common%20Ancestor%20of%20Deepest%20Leaves.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
