# 2095. Delete the Middle Node of a Linked List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2095 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `head` of a linked list. `Delete` the `middle node`, and return *the `head` of the modified linked list*.

### The middle node of a linked list of size `n` is the `⌊n / 2⌋`<sup>th</sup> node from the start using 0-based indexing, where `⌊x⌋` denotes the largest integer less than or equal to `x`.

- For `n` = `1`, `2`, `3`, `4`, and `5`, the middle nodes are `0`, `1`, `1`, `2`, and `2`, respectively.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2095 que 1](https://github.com/user-attachments/assets/92e91bdc-1577-47d9-9bc1-9c2e5c0f7c97)

  ### 📥 `Input`  ➤ head = [1,3,4,7,1,2,6]

  ### 📤 `Output`  ➤ [1,3,4,1,2,6]

  ### 🔦 `Explanation`  ➤ ➺The above figure represents the given linked list. The indices of the nodes are written below.</br> Since n = 7, node 3 with value 7 is the middle node, which is marked in red.</br> We return the new list after removing this node.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2095 que 2](https://github.com/user-attachments/assets/83353822-12ec-4c93-9017-7a346604e796)

  ### 📥 `Input` ➤ head = [1,2,3,4]

  ### 📤 `Output`  ➤ [1,2,4]

  ### 🔦 `Explanation` ➤ The above figure represents the given linked list. </br> For n = 4, node 2 with value 3 is the middle node, which is marked in red.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![2095 que 3](https://github.com/user-attachments/assets/3962bb46-74a0-46c5-813c-0d5ab5a5824a)

  ### 📥 `Input` ➤ head = [2,1]

  ### 📤 `Output`  ➤ [2]

  ### 🔦 `Explanation`  ➤ The above figure represents the given linked list.</br> For n = 2, node 1 with value 1 is the middle node, which is marked in red.</br> Node 0 with value 2 is the only node remaining after removing node 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is in the range [1, 10<sup>5</sup>].** </br>

🔹 **1 <= Node.val <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Two Pointers**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2029%20%F0%9F%AA%BB%202095.%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202095.%20Delete%20the%20Middl.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2029%20%F0%9F%AA%BB%202095.%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202095.%20Delete%20the%20Middle%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2029%20%F0%9F%AA%BB%202095.%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202095.%20Delete%20the%20Middl.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2029%20%F0%9F%AA%BB%202095.%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202095.%20Delete%20the%20M.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2029%20%F0%9F%AA%BB%202095.%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202095.%20Delete%20the%20Middle%20Node.c)  |
