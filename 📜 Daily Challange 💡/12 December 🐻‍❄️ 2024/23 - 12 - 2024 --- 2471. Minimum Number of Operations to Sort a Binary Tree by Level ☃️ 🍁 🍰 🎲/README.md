# 2471. Minimum Number of Operations to Sort a Binary Tree by Level

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/description/?envType=daily-question&envId=2024-12-23"><strong>➥ ☢️ 2471 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree with `unique values`.

### In one operation, you can choose any two nodes `at the same level` and swap their values.

### Return *the minimum number of operations needed to make the values at each level sorted in a `strictly increasing order`*.

### The `level` of a node is the number of edges along the path between it and the root node.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2471 que  1](https://github.com/user-attachments/assets/a7345aeb-abff-449c-a7bd-9ed66fb79183)

  ### 📥 `Input`  ➤ root = [1,4,3,7,6,8,5,null,null,null,null,9,null,10]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 

➺ Swap 4 and 3. The 2nd level becomes [3,4].

➺ Swap 7 and 5. The 3rd level becomes [5,6,8,7].

➺ Swap 8 and 7. The 3rd level becomes [5,6,7,8].

➺ We used 3 operations so return 3.

➺ It can be proven that 3 is the minimum number of operations needed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2471 que 2](https://github.com/user-attachments/assets/e950abe9-1d1d-4ac2-be4b-47d7cfee091e)

  ### 📥 `Input` ➤ root = [1,3,2,7,6,5,4]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ 

➺ Swap 3 and 2. The 2nd level becomes [2,3].

➺ Swap 7 and 4. The 3rd level becomes [4,6,5,7].

➺ Swap 6 and 5. The 3rd level becomes [4,5,6,7].

➺ We used 3 operations so return 3.

➺ It can be proven that 3 is the minimum number of operations needed.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![2471 que 3](https://github.com/user-attachments/assets/a75cc11e-9dd5-4441-bd35-7d84e5f786a5)

  ### 📥 `Input` ➤  root = [1,2,3,4,5,6]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Each level is already sorted in increasing order so return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is in the range [1, 10<sup>5</sup>].** </br>

🔹 **1 <= Node.val <= 10<sup>5</sup>** </br>

🔹 **All the values of the tree are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/23%20-%2012%20-%202024%20---%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree%20by%20Level%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/23%20-%2012%20-%202024%20---%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree%20by%20Level%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree%20b.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/23%20-%2012%20-%202024%20---%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree%20by%20Level%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/23%20-%2012%20-%202024%20---%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20Tree%20by%20Level%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202471.%20Minimum%20Number%20of%20Operations%20to%20Sort%20a%20Binary%20.js) |
