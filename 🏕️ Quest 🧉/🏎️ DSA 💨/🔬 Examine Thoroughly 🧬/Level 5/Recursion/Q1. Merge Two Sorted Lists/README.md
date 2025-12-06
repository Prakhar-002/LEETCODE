# 21. Merge Two Sorted Lists

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-two-sorted-lists/description/"><strong>➥ ♻️ 21 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the heads of two sorted linked lists `list1` and `list2`.

### Merge the two lists into one `sorted` list. The list should be made by splicing together the nodes of the first two lists.

### Return *the head of the merged linked list*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![21 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/08a357a4-d505-4fdf-8444-6c82ed61e699)

  ### 📥 Input  ➤ list1 = [1,2,4], list2 = [1,3,4]

  ### 📤 Output  ➤ [1,1,2,3,4,4]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ list1 = [], list2 = []

  ### 📤 Output  ➤ []


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ list1 = [], list2 = [0]

  ### 📤 Output  ➤ [0]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in both lists is in the range [0, 50].** </br>
🔹 **-100 <= Node.val <= 100** </br>
🔹 **Both `list1` and `list2` are sorted in `non-decreasing` order.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Recursion**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2021.%20Merge%20Two%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-21-MergeTwoSortedLists.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2021.%20Merge%20Two%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-21-MergeTwoSortedLists.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2021.%20Merge%20Two%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-21-MergeTwoSortedLists.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2021.%20Merge%20Two%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-21-MergeTwoSortedLists.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/06561df9-7b4d-473c-ac35-4bc759ca5c0d" width = "700px" height="462px" />

</h1>
