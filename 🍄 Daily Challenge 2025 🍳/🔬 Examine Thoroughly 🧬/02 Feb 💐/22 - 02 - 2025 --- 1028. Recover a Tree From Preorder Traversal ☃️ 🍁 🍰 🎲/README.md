# 1028. Recover a Tree From Preorder Traversal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/?envType=daily-question&envId=2025-02-22"><strong>➥ 🫀 1028 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### We run a **preorder depth-first search (DFS)** on the root of a binary tree.

### At each node in this traversal, we output **D dashes** (where **D** is the depth of this node), then we output the **value** of this node.

### - If the depth of a node is `D`, the depth of its immediate child is `D + 1`.
### - The depth of the **root node** is `0`.
### - If a node has **only one child**, that child is **guaranteed** to be the left child.

### Given the output `traversal` of this traversal, *recover the tree and return its* `root`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="423px" height="200px"/>

  ### 📥 `Input`  ➤ traversal = "1-2--3--4-5--6--7"

  ### 📤 `Output`  ➤ `[1,2,5,3,4,6,7]`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="423px" height="200px"/>

  ### 📥 `Input`  ➤ traversal = "1-2--3---4-5--6---7"

  ### 📤 `Output`  ➤ [1,2,5,3,null,6,null,4,null,7]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="" width="305px" height="250px"/>

  ### 📥 `Input`  ➤ traversal = "1-401--349---90--88"

  ### 📤 `Output`  ➤ [1,401,null,349,88,90]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the original tree is in the range `[1, 1000]`.** </br>

🔹 **1 <= Node.val <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |


