# 450. Delete Node in a BST

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-node-in-a-bst/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 450 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return *the root node reference (possibly updated) of the BST*.

### Basically, the deletion can be divided into two stages:

1. Search for a node to remove.

2. If the node is found, delete the node.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ root = [5,3,6,2,4,null,7], key = 3

  ### 📤 `Output`  ➤ [5,4,6,2,null,null,7]

  ### 🔦 `Explanation`  ➤ Given key to delete is 3. So we find the node with value 3 and delete it.</br> One valid answer is [5,4,6,2,null,null,7], shown in the above BST.</br> Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [5,3,6,2,4,null,7], key = 0

  ### 📤 `Output`  ➤ [5,3,6,2,4,null,7]

  ### 🔦 `Explanation` ➤ The tree does not contain a node with value = 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [], key = 0

  ### 📤 `Output`  ➤ []

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [0, 10<sup>4</sup>].** </br>

🔹 **-10<sup>5</sup> <= Node.val <= 10<sup>5</sup>** </br>

🔹 **Each node has a unique value.** </br>

🔹 **`root` is a valid binary search tree.** </br>

🔹 **-10<sup>5</sup> <= key <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Binary Search Tree**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
