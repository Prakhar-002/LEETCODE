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

  ### 📥 Input  ➤ root = [1,2,3,null,4], distance = 3

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation  ➤ The leaf nodes of the tree are 3 and 4 and the length of the shortest path between them is 3. This is the only good pair.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]()  |
