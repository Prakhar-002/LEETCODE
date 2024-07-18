# 1530. Number of Good Leaf Nodes Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/description/?envType=daily-question&envId=2024-07-18"><strong>➥ ☢️ 1530 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a binary tree and an integer `distance`. A pair of two different `leaf` nodes of a binary tree is said to be good if the length of the `shortest path` between them is less than or equal to `distance`.

### Return *the number of good leaf node pairs in the tree*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1530 que 1](https://github.com/user-attachments/assets/208278dc-e889-4406-9455-505555c7e47b)

  ### 📥 Input  ➤ root = [1,2,3,null,4], distance = 3

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation  ➤ The leaf nodes of the tree are 3 and 4 and the length of the shortest path between them is 3. This is the only good pair.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1530 que 2](https://github.com/user-attachments/assets/8d2fbbe7-e703-484f-ae7e-c26b0f386373)

  ### 📥 Input ➤  root = [1,2,3,4,5,6,7], distance = 3

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation ➤ The good pairs are [4,5] and [6,7] with shortest path = 2. The pair [4,6] is not good because the length of ther shortest path between them is 4.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  root = [7,1,4,6,null,5,3,null,null,null,null,null,2], distance = 3

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation  ➤ The only good pair is [2,5].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the `tree` is in the range [1, 2<sup>10</sup>].** </br>
🔹 **`1 <= Node.val <= 100`** </br>
🔹 **`1 <= distance <= 10`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/18%20-%2007%20-%202024%20---%201530.%20Number%20of%20Good%20Leaf%20Nodes%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1530-NumberOfGoodLeafNodesPairs.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/18%20-%2007%20-%202024%20---%201530.%20Number%20of%20Good%20Leaf%20Nodes%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1530-NumberOfGoodLeafNodesPairs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/18%20-%2007%20-%202024%20---%201530.%20Number%20of%20Good%20Leaf%20Nodes%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1530-NumberOfGoodLeafNodesPairs.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/18%20-%2007%20-%202024%20---%201530.%20Number%20of%20Good%20Leaf%20Nodes%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1530-NumberOfGoodLeafNodesPairs.js) |

