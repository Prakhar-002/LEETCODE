# 725. Split Linked List in Parts

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/split-linked-list-in-parts/description/?envType=daily-question&envId=2024-09-08"><strong>➥ ☢️ 725 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `head` of a singly linked list and an integer `k`, split the linked list into `k` consecutive linked list parts.

### The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

### The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

### Return *an array of the `k` parts*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ head = [1,2,3], k = 5

  ### 📤 `Output`  ➤ [[1],[2],[3],[],[]]

  ### 🔦 `Explanation`  ➤ ➺ The first element output[0] has output[0].val = 1, output[0].next = null. </br> The last element output[4] is null, but its string representation as a ListNode is [].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ head = [1,2,3,4,5,6,7,8,9,10], k = 3

  ### 📤 `Output`  ➤ [[1,2,3,4],[5,6,7],[8,9,10]]

  ### 🔦 `Explanation` ➤ The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is in the range `[0, 1000]`.** </br>

🔹 **`0 <= Node.val <= 1000`** </br>

🔹 **`1 <= k <= 50`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |