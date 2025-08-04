# 23. Merge k Sorted Lists

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-k-sorted-lists/description/"><strong>➥ 🫀 23 Leetcode Hard 🫀 </strong></a>
</h2> 

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

### *Merge all the linked-lists into one sorted linked-list and return it*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ lists = [[1,4,5],[1,3,4],[2,6]]

  ### 📤 `Output`  ➤ [1,1,2,3,4,4,5,6]

  ### 🔦 `Explanation`  ➤  The linked-lists are ➺

    [
      1 ➺ 4 ➺ 5,
      1 ➺ 3 ➺ 4,
      2 ➺ 6
    ]

    merging them into one sorted list:
    1 ➺ 1 ➺ 2 ➺ 3 ➺ 4 ➺ 4 ➺ 5 ➺ 6

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ lists = []

  ### 📤 `Output`  ➤ []


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ lists = [[]]

  ### 📤 `Output`  ➤ []

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`k == lists.length`** </br>

🔹 **0 <= k <= 10<sup>4</sup>** </br>

🔹 **`0 <= lists[i].length <= 500`** </br>

🔹 **-10<sup>4</sup> <= lists[i][j] <= 10<sup>4</sup>** </br>

🔹 **`lists[i]` is sorted in ascending order.** </br>

🔹 **The sum of `lists[i].length` will not exceed 10<sup>4</sup>.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Divide and Conquer**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Merge Sort**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2023.%20Merge%20k%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2023.%20Merge%20k%20Sorted%20Lists.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2023.%20Merge%20k%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2023.%20Merge%20k%20Sorted%20Lists.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2023.%20Merge%20k%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2023.%20Merge%20k%20Sorted%20Lists.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2023.%20Merge%20k%20Sorted%20Lists%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2023.%20Merge%20k%20Sorted%20Lists.js) |

