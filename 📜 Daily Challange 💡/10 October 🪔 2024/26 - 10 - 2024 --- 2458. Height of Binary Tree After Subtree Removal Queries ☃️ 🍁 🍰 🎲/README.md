# 2458. Height of Binary Tree After Subtree Removal Queries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/height-of-binary-tree-after-subtree-removal-queries/?envType=daily-question&envId=2024-10-26"><strong>➥ 🫀 2458 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a `binary tree` with `n` nodes. Each node is assigned a unique value from `1` to `n`. You are also given an array `queries` of size `m`.

### You have to perform `m` `independent` queries on the tree where in the `i-th` query you do the following:

- Remove the subtree rooted at the node with the value `queries[i]` from the tree. It is `guaranteed` that `queries[i]` will not be equal to the value of the root.

### Return *an array answer of size `m` where `answer[i]` is the height of the tree after performing the `i-th` query*.

### Note:

- The queries are independent, so the tree returns to its `initial` state after each query.

- The height of a tree is the `number of edges in the longest simple path` from the root to some node in the tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ root = [1,3,4,2,null,6,5,null,null,null,null,null,7], queries = [4]

  ### 📤 `Output`  ➤ [2]

  ### 🔦 `Explanation`  ➤ The diagram above shows the tree after removing the subtree rooted at node with value 4.

    The height of the tree is 2 (The path 1 -> 3 -> 2).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [5,8,9,2,1,3,7,4,6], queries = [3,2,4,8]

  ### 📤 `Output`  ➤ [3,2,3,2]

  ### 🔦 `Explanation` ➤ We have the following queries:

    ➺ Removing the subtree rooted at node with value 3. The height of the tree becomes 3 
        (The path 5 -> 8 -> 2 -> 4).

    ➺ Removing the subtree rooted at node with value 2. The height of the tree becomes 2 
          (The path 5 -> 8 -> 1).

    ➺ Removing the subtree rooted at node with value 4. The height of the tree becomes 3 
          (The path 5 -> 8 -> 2 -> 6).

    ➺ Removing the subtree rooted at node with value 8. The height of the tree becomes 2 
          (The path 5 -> 9 -> 3).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is n.** </br>

🔹 **2 <= n <= 10<sup>5</sup>** </br>

🔹 **`1 <= Node.val <= n`** </br>

🔹 **All the values in the tree are unique.** </br>

🔹 **`m == queries.length`** </br>

🔹 **1 <= m <= min(n, 10<sup>4</sup>)** </br>

🔹 **`1 <= queries[i] <= n`** </br>

🔹 **`queries[i] != root.val`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/26%20-%2010%20-%202024%20---%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/26%20-%2010%20-%202024%20---%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries.java)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/26%20-%2010%20-%202024%20---%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/26%20-%2010%20-%202024%20---%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202458.%20Height%20of%20Binary%20Tree%20After%20Subtree%20Removal%20Queries.js) |