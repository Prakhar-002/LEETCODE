# 143. Reorder List

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 143 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given `head`, which represents a reference to the first node of a singly linked-list. The linked list can be represented as:

L0 → L1 → … → Ln - 1 → Ln

### Your task is to reorder the linked list to have the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …

### Important Constraints:

- You are *not* allowed to modify the values stored in the list's nodes (only their connections - i.e., the `.next` pointers can be changed).

### You can only rearrange the nodes themselves.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/b982b9c8-925c-4d89-b6be-e6d9e59c1a35" width="" height=""/>

  ### 📥 `Input`  ➤ head = [1,2,3,4]

  ### 📤 `Output`  ➤ [1,4,2,3]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/6f6bbdb1-e73c-4320-8405-dbea87f17e4f" width="" height=""/>

  ### 📥 `Input` ➤ head = [1,2,3,4,5]

  ### 📤 `Output`  ➤ [1,5,2,4,3]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the list is in the range [1, 5 * 10<sup>4</sup>]. </br>

🔹 1 <= Node.val <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>

🔸 **Two Pointers**  </br>

🔸 **Stack**  </br>

🔸 **Recursion**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2038%20%F0%9F%A5%A1%20143.%20Reorder%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20143.%20Reorder%20List.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2038%20%F0%9F%A5%A1%20143.%20Reorder%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20143.%20Reorder%20List.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2038%20%F0%9F%A5%A1%20143.%20Reorder%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20143.%20Reorder%20List.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20Linked%20List/Day%20%E2%9E%BA%2038%20%F0%9F%A5%A1%20143.%20Reorder%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20143.%20Reorder%20List.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a7d6fc5e-18cf-40b9-9f8d-2cf54922138b" width = "700px" height="462px" />

</h1>
