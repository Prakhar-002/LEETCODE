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

![2807 que 1](https://github.com/user-attachments/assets/ab037c90-640b-4ab8-a45f-e99c77ab14bc)

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

![2807 que 2](https://github.com/user-attachments/assets/72dd7acc-bd9a-4631-be7d-8e13209c72d4)

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/10%20-%2009%20-%202024%20---%202807.%20Insert%20Greatest%20Common%20Divisors%20in%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2807-InsertGreatestCommonDivisorsInLinkedList.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/10%20-%2009%20-%202024%20---%202807.%20Insert%20Greatest%20Common%20Divisors%20in%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2807-InsertGreatestCommonDivisorsInLinkedList.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/10%20-%2009%20-%202024%20---%202807.%20Insert%20Greatest%20Common%20Divisors%20in%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2807-InsertGreatestCommonDivisorsInLinkedList.pyhttps://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/10%20-%2009%20-%202024%20---%202807.%20Insert%20Greatest%20Common%20Divisors%20in%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2807-InsertGreatestCommonDivisorsInLinkedList.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/10%20-%2009%20-%202024%20---%202807.%20Insert%20Greatest%20Common%20Divisors%20in%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2807-InsertGreatestCommonDivisorsInLinkedList.js) |

