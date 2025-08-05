# 1448. Count Good Nodes in Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-good-nodes-in-binary-tree/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 1448 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary tree `root`, a node X in the tree is named good if in the path from root to X there are no nodes with a value *greater than* X.

### Return the number of good nodes in the binary tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/08790724-db1f-4470-a036-f882cf1f48ac" width="263px" height="156px"/>

  ### 📥 `Input`  ➤ root = [3,1,4,3,null,1,5]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ Nodes in blue are good.</br> Root Node (3) is always a good node.</br> Node 4 -> (3,4) is the maximum value in the path starting from the root.</br> Node 5 -> (3,4,5) is the maximum value in the path</br> Node 3 -> (3,1,3) is the maximum value in the path.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/2ccdc5e0-d1e5-442b-83d3-de937222deeb" width="157px" height="161px"/>

  ### 📥 `Input` ➤ root = [3,3,null,4,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ root = [1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ Root is considered as good.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the binary tree is in the range [1, 10<sup>5</sup>].** </br>

🔹 **Each node's value is between [-10<sup>4</sup>, 10<sup>4</sup>].** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Binary%20Tree%20-%20DFS/Day%20%E2%9E%BA%2035%20%F0%9F%AA%BB%201448.%20Count%20Good%20Nodes%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201448.%20Count%20Good%20Nodes%20i.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Binary%20Tree%20-%20DFS/Day%20%E2%9E%BA%2035%20%F0%9F%AA%BB%201448.%20Count%20Good%20Nodes%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201448.%20Count%20Good%20Nodes%20in%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Binary%20Tree%20-%20DFS/Day%20%E2%9E%BA%2035%20%F0%9F%AA%BB%201448.%20Count%20Good%20Nodes%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201448.%20Count%20Good%20Nodes%20i.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Binary%20Tree%20-%20DFS/Day%20%E2%9E%BA%2035%20%F0%9F%AA%BB%201448.%20Count%20Good%20Nodes%20in%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201448.%20Count%20Good%20Nod.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/07b17385-649c-48ba-a304-a568fc72e49d" width = "700px" height="462px" />

</h1>
