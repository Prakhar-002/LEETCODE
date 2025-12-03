# Q3. Insertion Sort List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insertion-sort-list/description/?envType=problem-list-v2&envId=dsa-sorting-plateau-counting-sort-merge-sort-quickselect"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.

### The steps of the insertion sort algorithm:

- Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
- At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
- It repeats until no input elements remain.

### The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ head = [4,2,1,3]

  ### 📤 `Output`  ➤ [1,2,3,4]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ head = [-1,5,3,4,0]

  ### 📤 `Output`  ➤ [-1,0,3,4,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The number of nodes in the list is in the range [1, 5000]. </br>
🔹 -5000 <= Node.val <= 5000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Counting/Q3.%20Insertion%20Sort%20List/%F0%9F%8D%81JAVA%20-%20Insertion%20Sort%20List.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Counting/Q3.%20Insertion%20Sort%20List/%F0%9F%8E%B2CPP%20-%20Insertion%20Sort%20List.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Counting/Q3.%20Insertion%20Sort%20List/%F0%9F%8D%B0PYTHON%20-%20Insertion%20Sort%20List.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Counting/Q3.%20Insertion%20Sort%20List/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Insertion%20Sort%20List.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1981c038-56a2-4edc-938d-2254b566183c" width = "700px" height="462px" />

</h1>
