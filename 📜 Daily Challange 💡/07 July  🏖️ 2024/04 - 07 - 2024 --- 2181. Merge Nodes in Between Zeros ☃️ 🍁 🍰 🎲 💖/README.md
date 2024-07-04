# 2181. Merge Nodes in Between Zeros

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04"><strong>➥ ☢️ 2181 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `head` of a linked list, which contains a series of integers separated by `0`'s. The `beginning` and `end` of the linked list will have `Node.val == 0`.

### For `every` two consecutive `0`'s, `merge` all the nodes lying in between them into a single node whose value is the `sum` of all the merged nodes. The modified list should not contain any `0`'s.

### Return *the `head` of the modified linked list*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ head = [0,3,1,0,4,5,2,0]

  ### 📤 Output  ➤ [4,11]

  ### 🔦 Explanation  ➤ 
    The above figure represents the given linked list. The modified list contains

      - The sum of the nodes marked in green: 3 + 1 = 4.
      
      - The sum of the nodes marked in red: 4 + 5 + 2 = 11.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  head = [0,1,0,3,0,2,2,0]

  ### 📤 Output  ➤ [1,3,4]

  ### 🔦 Explanation ➤ 
    The above figure represents the given linked list. The modified list contains
    
    - The sum of the nodes marked in green: 1 = 1.
    
    - The sum of the nodes marked in red: 3 = 3.
    
    - The sum of the nodes marked in yellow: 2 + 2 = 4.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is in the range [3, 2 * 10<sup>5</sup> ]** </br>
🔹 **There are no two consecutive nodes with Node.`val == 0`.** </br>
🔹 **The `beginning` and `end` of the linked list have Node.`val == 0`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/04%20-%2007%20-%202024%20---%202181.%20Merge%20Nodes%20in%20Between%20Zeros%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-2181-MergeNodesInBetweenZeros.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/04%20-%2007%20-%202024%20---%202181.%20Merge%20Nodes%20in%20Between%20Zeros%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-2181-MergeNodesInBetweenZeros.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/04%20-%2007%20-%202024%20---%202181.%20Merge%20Nodes%20in%20Between%20Zeros%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-2181-MergeNodesInBetweenZeros.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/04%20-%2007%20-%202024%20---%202181.%20Merge%20Nodes%20in%20Between%20Zeros%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-2181-MergeNodesInBetweenZeros.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/04%20-%2007%20-%202024%20---%202181.%20Merge%20Nodes%20in%20Between%20Zeros%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-2181-MergeNodesInBetweenZeros.c)  |
