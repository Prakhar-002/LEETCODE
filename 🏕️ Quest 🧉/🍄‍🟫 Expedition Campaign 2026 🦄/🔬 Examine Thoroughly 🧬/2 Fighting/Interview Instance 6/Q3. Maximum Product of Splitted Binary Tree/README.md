# Q3. Maximum Product of Splitted Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/description/?envType=problem-list-v2&envId=interview-instance-vi"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given the `root` of a binary tree, split the binary tree into two subtrees by **removing one edge** such that the **product of the sums** of the subtrees is maximized.
### Return the **maximum product** of the sums of the two subtrees. Since the answer may be too large, return it **modulo** `10^9 + 7`.
### Note that you need to **maximize the answer before taking the mod** and not after taking it.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src ="./Images/1image.png" width = "500px" height="167px" />

  ### 📥 `Input`  ➤ root = [1,2,3,4,5,6]
  ### 📤 `Output`  ➤ 110
  ### 🔦 `Explanation`  ➤ Remove the red edge and get 2 binary trees with sum 11 and 10. Their product is 110 (11*10).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
<img src ="./Images/2image.png" width = "500px" height="167px" />

  ### 📥 `Input` ➤ root = [1,null,2,3,4,null,null,5,6]
  ### 📤 `Output`  ➤ 90
  ### 🔦 `Explanation` ➤ Remove the red edge and get 2 binary trees with sum 15 and 6. Their product is 90 (15*6).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ root = [1,2,3]
  ### 📤 `Output`  ➤ 6
  ### 🔦 `Explanation` ➤ Either edge removal gives subtree sums of (1+2)=3 & 3, or (1+3)=4 & 2. Best product is 3*3 = 9, but with sums 2 & 4 → 2*4 = 8, and sums 3 & 3 → 9. Maximum is 6 for a minimal tree split.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 The number of nodes in the tree is in the range `[2, 5 * 10^4]`. </br>
🔹 `1 <= Node.val <= 10^4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Tree** </br>
🔸 **Depth-First Search** </br>
🔸 **Binary Tree** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="./Images/image.png" width = "700px" height="462px" />

</h1>
