# 2096. Step-By-Step Directions From a Binary Tree Node to Another

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/description/?envType=daily-question&envId=2024-07-16"><strong>➥ ☢️ 2096 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the `root` of a `binary tree` with `n` nodes. Each node is uniquely assigned a value from `1` to `n`. You are also given an integer startValue representing the value of the start node `s`, and a different integer `destValue` representing the value of the `destination` node `t`.

### Find the `shortest path` starting from node `s` and ending at node `t`. Generate step-by-step directions of such path as a string consisting of only the `uppercase` letters `'L'`, `'R'`, and `'U'`. Each letter indicates a specific direction:

- 'L' means to go from a node to its left child node.

- 'R' means to go from a node to its right child node.

- 'U' means to go from a node to its parent node.

### Return *the step-by-step directions of the `shortest path` from node `s` to node `t`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2096 que 1](https://github.com/user-attachments/assets/5c563529-8e29-47e6-a660-36e764124008)

  ### 📥 Input  ➤ [5,1,2,3,null,6,4], startValue = 3, destValue = 6

  ### 📤 Output  ➤ "UURL"

  ### 🔦 Explanation  ➤  The shortest path is: 3 → 1 → 5 → 2 → 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2096 que 2](https://github.com/user-attachments/assets/3a6ad76c-289c-4cd6-b7a7-42b73488ae0f)

  ### 📥 Input ➤ root = [2,1], startValue = 2, destValue = 1

  ### 📤 Output  ➤ "L"

  ### 🔦 Explanation ➤ The shortest path is: 2 → 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the tree is `n`.** </br>
🔹 **2 <= n <= 10<sup>5</sup>** </br>
🔹 **1 <= Node.val <= n** </br>
🔹 **All the values in the tree are `unique`.** </br>
🔹 **1 <= startValue, destValue <= n** </br>
🔹 **startValue != destValue** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/16%20-%2007%20-%202024%20---%202096.%20Step-By-Step%20Directions%20From%20a%20Binary%20Tree%20Node%20to%20Another%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2096.-Step-ByStepDirectionsFromAB-TreeNodeToAnother.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/16%20-%2007%20-%202024%20---%202096.%20Step-By-Step%20Directions%20From%20a%20Binary%20Tree%20Node%20to%20Another%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2096.-Step-ByStepDirectionsFromAB-TreeNodeToAnother.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/16%20-%2007%20-%202024%20---%202096.%20Step-By-Step%20Directions%20From%20a%20Binary%20Tree%20Node%20to%20Another%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2096.-Step-ByStepDirectionsFromAB-TreeNodeToAnother.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/16%20-%2007%20-%202024%20---%202096.%20Step-By-Step%20Directions%20From%20a%20Binary%20Tree%20Node%20to%20Another%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2096.-Step-ByStepDirectionsFromAB-TreeNodeToAnother.js) |

