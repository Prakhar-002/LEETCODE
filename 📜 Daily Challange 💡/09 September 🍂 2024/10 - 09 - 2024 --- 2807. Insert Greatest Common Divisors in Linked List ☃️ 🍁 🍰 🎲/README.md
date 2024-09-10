# 2807. Insert Greatest Common Divisors in Linked List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/?envType=daily-question&envId=2024-09-10"><strong>➥ ☢️ 2807 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the head of a linked list `head`, in which each node contains an integer value.

### Between every pair of adjacent nodes, insert a new node with a value equal to the `greatest common divisor` of them.

### Return *the linked list after insertion*.

### The `greatest common divisor` of two numbers is the largest positive integer that evenly divides both numbers.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ head = [18,6,10,3]

  ### 📤 `Output`  ➤ [18,6,6,2,10,1,3]

  ### 🔦 `Explanation`  ➤ The 1<sup>st</sup> diagram denotes the initial linked list and the 2<sup>nd</sup> diagram denotes the linked list after inserting the new nodes (nodes in blue are the inserted nodes).

    ➺ We insert the greatest common divisor of 18 and 6 = 6 
        between the 1st and the 2nd nodes.

    ➺ We insert the greatest common divisor of 6 and 10 = 2 
        between the 2nd and the 3rd nodes.

    ➺ We insert the greatest common divisor of 10 and 3 = 1 
        between the 3rd and the 4th nodes.

    There are no more adjacent nodes, 
        so we return the linked list.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ head = [7]

  ### 📤 `Output`  ➤  [7]

  ### 🔦 `Explanation` ➤ The 1<sup>st</sup> diagram denotes the initial linked list and the 2<sup>nd</sup> diagram denotes the linked list after inserting the new nodes.

    There are no pairs of adjacent nodes, 
        so we return the initial linked list.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is in the range `[1, 5000]`.** </br>

🔹 **`1 <= Node.val <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Math**  </br>
🔸 **Number Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

