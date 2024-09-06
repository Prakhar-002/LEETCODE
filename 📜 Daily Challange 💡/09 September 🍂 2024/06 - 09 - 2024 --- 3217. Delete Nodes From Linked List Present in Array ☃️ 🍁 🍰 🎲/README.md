# 3217. Delete Nodes From Linked List Present in Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/?envType=daily-question&envId=2024-09-06"><strong>➥ ☢️ 3217 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `nums` and the `head` of a linked list. Return *the `head` of the modified linked list after `removing` all nodes from the linked list that have a value that exists in `nums`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [1,2,3], head = [1,2,3,4,5]

  ### 📤 `Output`  ➤ [4,5]

  ### 🔦 `Explanation`  ➤ Remove the nodes with values 1, 2, and 3.

![3217 que 1](https://github.com/user-attachments/assets/8ad7cc36-125f-4f29-b28f-3b8d7b109a1c)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1], head = [1,2,1,2,1,2]

  ### 📤 `Output`  ➤ [2,2,2]

  ### 🔦 `Explanation` ➤ Remove the nodes with value 1.

![3217 que 2](https://github.com/user-attachments/assets/d9acb212-3ea3-403c-b64c-2d9c7fa320f1)

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5], head = [1,2,3,4]

  ### 📤 `Output`  ➤  [1,2,3,4]

  ### 🔦 `Explanation`  ➤ No node has value 5.

![3217 que 3](https://github.com/user-attachments/assets/27003080-d00a-4efe-ab69-9f11270630d4)

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

🔹 **All elements in `nums` are unique.** </br>

🔹 **The number of nodes in the given list is in the range [1, 10<sup>5</sup>].** </br>

🔹 **1 <= Node.val <= 10<sup>5</sup>** </br>

🔹 **The input is generated such that there is at least one node in the linked list that has a value not present in `nums`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Linked List**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/06%20-%2009%20-%202024%20---%203217.%20Delete%20Nodes%20From%20Linked%20List%20Present%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-3217-DeleteNodesFromLinkedListPresentInArray.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/06%20-%2009%20-%202024%20---%203217.%20Delete%20Nodes%20From%20Linked%20List%20Present%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-3217-DeleteNodesFromLinkedListPresentInArray.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/06%20-%2009%20-%202024%20---%203217.%20Delete%20Nodes%20From%20Linked%20List%20Present%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-3217-DeleteNodesFromLinkedListPresentInArray.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/06%20-%2009%20-%202024%20---%203217.%20Delete%20Nodes%20From%20Linked%20List%20Present%20in%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-3217-DeleteNodesFromLinkedListPresentInArray.js) |
