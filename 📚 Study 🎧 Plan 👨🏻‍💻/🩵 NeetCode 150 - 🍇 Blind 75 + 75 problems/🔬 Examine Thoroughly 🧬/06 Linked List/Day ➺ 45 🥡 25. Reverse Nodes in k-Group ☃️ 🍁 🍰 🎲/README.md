# 25. Reverse Nodes in k-Group

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-nodes-in-k-group/description/"><strong>➥ 🫀 25 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `head` of a singly linked list. The objective is to reverse the nodes of this list in groups of `k` at a time, and then return the modified list's head.

### Constraints to remember:

- `k` is a positive integer and is always less than or equal to the length of the linked list.
- If the number of nodes is not a perfect multiple of `k`, then the remaining nodes at the end of the list should be left in their original order.

### Additionally, you may not alter the *values* within the list's nodes. Only the nodes themselves (and their connections) can be changed.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ![25 que 1](https://github.com/user-attachments/assets/195f5abc-698b-42e4-8e1a-2df475db666d)

  ### 📥 `Input`  ➤ head = [1,2,3,4,5], k = 2

  ### 📤 `Output`  ➤ [2,1,4,3,5]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![25 que 2](https://github.com/user-attachments/assets/245ac5ae-1b81-483a-b052-7d2e0098e85d)

  ### 📥 `Input` ➤ head = [1,2,3,4,5], k = 3

  ### 📤 `Output`  ➤ [3,2,1,4,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the list is n. </br>

🔹 1 <= k <= n <= 5000 </br>

🔹 0 <= Node.val <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>

🔸 **Recursion**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2045%20%F0%9F%A5%A1%2025.%20Reverse%20Nodes%20in%20k-Group%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2025.%20Reverse%20Nodes%20in%20k-Group.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2045%20%F0%9F%A5%A1%2025.%20Reverse%20Nodes%20in%20k-Group%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2025.%20Reverse%20Nodes%20in%20k-Group.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2045%20%F0%9F%A5%A1%2025.%20Reverse%20Nodes%20in%20k-Group%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2025.%20Reverse%20Nodes%20in%20k-Group.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2045%20%F0%9F%A5%A1%2025.%20Reverse%20Nodes%20in%20k-Group%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2025.%20Reverse%20Nodes%20in%20k-Group.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5ae87c58-470b-4939-9c13-770cbcfb5ff7" width = "700px" height="462px" />

</h1>
