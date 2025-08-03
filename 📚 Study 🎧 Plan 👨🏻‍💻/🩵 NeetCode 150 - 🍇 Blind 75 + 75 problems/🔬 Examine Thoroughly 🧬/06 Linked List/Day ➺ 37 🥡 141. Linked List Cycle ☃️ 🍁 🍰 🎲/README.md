# 141. Linked List Cycle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/linked-list-cycle/description/"><strong>➥ ♻️ 141 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given `head`, the reference node to the head of a singly-linked list. Your task is to determine if the linked list contains a cycle.

Definition of a Cycle: A cycle exists in a linked list if, starting from the head, you can reach a node that you have visited previously by continuously following the `.next` pointer.  Internally, an integer `pos` is used to denote the index of the node to which the tail's `.next` pointer is connected (the point where the cycle begins). However, `pos` is *not* passed as an argument to your function.

Return `true` if the linked list contains a cycle. Return `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ head = [3,2,0,-4], pos = 1

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ head = [1,2], pos = 0

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ There is a cycle in the linked list, where the tail connects to the 0th node.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ head = [1], pos = -1

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ There is no cycle in the linked list.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the list is in the range [0, 10<sup>4</sup>]. </br>

🔹 -10<sup>5</sup> <= Node.val <= 10<sup>5</sup> </br>

🔹 pos is -1 or a valid index in the linked-list. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **Linked List**  </br>

🔸 **Two Pointers**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2037%20%F0%9F%A5%A1%20141.%20Linked%20List%20Cycle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20141.%20Linked%20List%20Cycle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2037%20%F0%9F%A5%A1%20141.%20Linked%20List%20Cycle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20141.%20Linked%20List%20Cycle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2037%20%F0%9F%A5%A1%20141.%20Linked%20List%20Cycle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20141.%20Linked%20List%20Cycle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2037%20%F0%9F%A5%A1%20141.%20Linked%20List%20Cycle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20141.%20Linked%20List%20Cycle.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/52b4de0b-faca-4ba8-a811-f84a0533ef15" width = "700px" height="462px" />

</h1>
