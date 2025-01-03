# 2130. Maximum Twin Sum of a Linked List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2130 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In a linked list of size `n`, where `n` is even, the `i`<sup>th</sup> node `(0-indexed)` of the linked list is known as the twin of the `(n-1-i)`<sup>th</sup> node, if `0 <= i <= (n / 2) - 1`.

- For example, if `n = 4`, then node `0` is the twin of node `3`, and node `1` is the twin of node `2`. These are the only nodes with twins for `n = 4`.

### The `twin sum` is defined as the sum of a node and its twin.

### Given the `head` of a linked list with even length, return *the `maximum twin sum` of the linked list*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/922adba4-6d4e-48a9-952a-8190ec41b6c9" width="250px" height="70px" />

  ### 📥 `Input`  ➤ head = [5,4,2,1]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.</br> There are no other nodes with twins in the linked list.</br> Thus, the maximum twin sum of the linked list is 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/619a56a1-7a34-4cdc-bb86-826cbb20ed6d" width="250px" height="70px" />

  ### 📥 `Input` ➤ head = [4,2,2,3]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ The nodes with twins present in this linked list are:</br> - Node 0 is the twin of node 3 having a twin sum of 4 + 3 = 7.</br> - Node 1 is the twin of node 2 having a twin sum of 2 + 2 = 4.</br> Thus, the maximum twin sum of the linked list is max(7, 4) = 7. 

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/44ddbb22-9c8c-4e98-a712-f4e9465ec9ec" width="200px" height="88px" />

  ### 📥 `Input` ➤ head = [1,100000]

  ### 📤 `Output`  ➤ 100001

  ### 🔦 `Explanation`  ➤ There is only one node with a twin in the linked list having twin sum of 1 + 100000 = 100001. 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is an even integer in the range [2, 10<sup>5</sup>].** </br>

🔹 **1 <= Node.val <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>
🔸 **Two Pointers**  </br>
🔸 **Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2032%20%F0%9F%AA%BB%202130.%20Maximum%20Twin%20Sum%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202130.%20Maximum%20Twin%20Sum%20of%20a%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2032%20%F0%9F%AA%BB%202130.%20Maximum%20Twin%20Sum%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202130.%20Maximum%20Twin%20Sum%20of%20a%20Li.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2032%20%F0%9F%AA%BB%202130.%20Maximum%20Twin%20Sum%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202130.%20Maximum%20Twin%20Sum%20of%20a%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Linked%20List/Day%20%E2%9E%BA%2032%20%F0%9F%AA%BB%202130.%20Maximum%20Twin%20Sum%20of%20a%20Linked%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202130.%20Maximum%20Twin%20Sum%20o.js) |
