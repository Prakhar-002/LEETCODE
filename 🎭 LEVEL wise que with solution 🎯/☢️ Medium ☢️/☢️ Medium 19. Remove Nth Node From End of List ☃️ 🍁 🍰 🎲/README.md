# 19. Remove Nth Node From End of List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-nth-node-from-end-of-list/"><strong>➥ ☢️ 19 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![19 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/646a8cc7-2025-42d5-b47e-081cc71a82c2)

  ### 📥 Input  ➤ head = [1,2,3,4,5], n = 2

  ### 📤 Output  ➤ [1,2,3,5]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ head = [1], n = 1

  ### 📤 Output  ➤ []



</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ head = [1,2], n = 1

  ### 📤 Output  ➤ [1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is sz.** </br>
🔹 **1 <= sz <= 30** </br>
🔹 **0 <= Node.val <= 100** </br>
🔹 **1 <= n <= sz** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Two Pointers**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2019.%20Remove%20Nth%20Node%20From%20End%20of%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-19-RemoveNthNodeFromEndOfList.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2019.%20Remove%20Nth%20Node%20From%20End%20of%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-19-RemoveNthNodeFromEndOfList.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2019.%20Remove%20Nth%20Node%20From%20End%20of%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-19-RemoveNthNodeFromEndOfList.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2019.%20Remove%20Nth%20Node%20From%20End%20of%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-19-RemoveNthNodeFromEndOfList.js) |
