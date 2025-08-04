# 138. Copy List with Random Pointer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/copy-list-with-random-pointer/description/"><strong>➥ ☢️ 138 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `head` of a linked list, where each node has an additional `random` pointer. This random pointer can point to any node in the list, or it can be null.

### Your objective is to construct a *deep copy* of this linked list. A deep copy means creating an entirely new linked list with new nodes. Each new node should have:

- The same `.val` as its corresponding original node.
- The `.next` pointer should point to the corresponding new node in the copied list.
- The `.random` pointer should also point to the corresponding new node in the copied list.

### Crucially, *none* of the pointers in the new list should point back to any of the nodes in the original linked list.

### The linked list is represented in the input/output as a list of `n` nodes. Each node is represented by a pair `[val, random_index]`, where:

- `val`: An integer representing the `Node.val`
- `random_index`: The index of the node (ranging from 0 to n-1) that the `.random` pointer points to, or `null` if the `.random` pointer does not point to any node.

### You will only be given the `head` of the original linked list. Return the `head` of the newly created, deep-copied linked list.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ head = [[7,null],[13,0],[11,4],[10,2],[1,0]]

  ### 📤 `Output`  ➤ [[7,null],[13,0],[11,4],[10,2],[1,0]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ head = [[1,1],[2,1]]

  ### 📤 `Output`  ➤ [[1,1],[2,1]]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ head = [[3,null],[3,0],[3,null]]

  ### 📤 `Output`  ➤ [[3,null],[3,0],[3,null]]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 0 <= n <= 1000 </br>

🔹 -10<sup>4</sup> <= Node.val <= 10<sup>4</sup> </br>

🔹 Node.random is null or is pointing to some node in the linked list. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **Linked List**  </br>

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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
