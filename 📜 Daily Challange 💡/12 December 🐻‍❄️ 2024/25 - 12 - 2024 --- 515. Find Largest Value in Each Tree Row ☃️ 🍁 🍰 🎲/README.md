# 515. Find Largest Value in Each Tree Row

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/?envType=daily-question&envId=2024-12-25"><strong>➥ ☢️ 515 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the `root` of a binary tree, return *an array of the largest value in each row of the tree (0-indexed)*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/abc1dd45-c481-450e-9073-029702857bd1" width="450" height="258" alt="3203 Que 1">

  ### 📥 `Input`  ➤  root = [1,3,2,5,3,null,9]

  ### 📤 `Output`  ➤ [1,3,9]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [1,2,3]

  ### 📤 `Output`  ➤ [1,3]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree will be in the range [0, 10<sup>4</sup>].** </br>

🔹 **-2<sup>31</sup> <= Node.val <= 2<sup>31</sup> - 1** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/25%20-%2012%20-%202024%20---%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/25%20-%2012%20-%202024%20---%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/25%20-%2012%20-%202024%20---%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/25%20-%2012%20-%202024%20---%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row.js) |
