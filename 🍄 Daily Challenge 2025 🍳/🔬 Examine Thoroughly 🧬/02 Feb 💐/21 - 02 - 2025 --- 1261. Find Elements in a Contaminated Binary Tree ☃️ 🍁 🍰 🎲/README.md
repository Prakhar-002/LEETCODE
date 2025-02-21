# 1261. Find Elements in a Contaminated Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/?envType=daily-question&envId=2025-02-21"><strong>➥ ☢️ 1261 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary tree with the following rules:

1. `root.val == 0`

2. For any `treeNode`:

    1. If `treeNode.val` has a value `x` and `treeNode.left != null`, then `treeNode.left.val == 2 * x + 1`

    2. If `treeNode.val` has a value `x` and `treeNode.right != null`, then `treeNode.right.val == 2 * x + 2`

### Now the binary tree is contaminated, which means all `treeNode.val` have been changed to `-1`.

### Implement the `FindElements` class:

- `FindElements(TreeNode* root)` Initializes the object with a contaminated binary tree and recovers it.

- `bool find(int target)` Returns `true` if the `target` value exists in the recovered binary tree.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/3c69fb39-5f32-432c-9492-ab52f5a3b04a" width="320px" height="119px"/>

  ### 📥 `Input`  ➤ ["FindElements","find","find"]  [[[-1,null,-1]],[1],[2]]

  ### 📤 `Output`  ➤ [null,false,true]

  ### 🔦 `Explanation`  ➤ FindElements findElements = new FindElements([-1,null,-1]); </br></br>findElements.find(1); // return False </br></br>findElements.find(2); // return True 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/17956601-66ca-4f29-838d-9b2e81921d79" width="400px" height="198px"/>

  ### 📥 `Input` ➤ ["FindElements","find","find","find"]   [[[-1,-1,-1,-1,-1]],[1],[3],[5]]

  ### 📤 `Output`  ➤ [null,true,true,false]

  ### 🔦 `Explanation` ➤ FindElements findElements = new FindElements([-1,-1,-1,-1,-1]);</br></br> findElements.find(1); // return True</br></br> findElements.find(3); // return True</br></br> findElements.find(5); // return False

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/820e9e11-2a16-4e15-95b2-9d286c519774" width="306px" height="274px"/>

  ### 📥 `Input` ➤ ["FindElements","find","find","find","find"] [[[-1,null,-1,-1,null,-1]],[2],[3],[4],[5]]

  ### 📤 `Output`  ➤ [null,true,false,false,true]

  ### 🔦 `Explanation`  ➤ FindElements findElements = new FindElements([-1,null,-1,-1,null,-1]);</br></br>findElements.find(2); // return True</br></br>findElements.find(3); // return False</br></br>findElements.find(4); // return False</br></br>findElements.find(5); // return True

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`TreeNode.val == -1`** </br>

🔹 **The height of the binary tree is less than or equal to `20`** </br>

🔹 **The total number of nodes is between [1, 10<sup>4</sup>]** </br>

🔹 **Total calls of find() is between [1, 10<sup>4</sup>]** </br>

🔹 **0 <= target <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Design**  </br>
🔸 **Binary Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/21%20-%2002%20-%202025%20---%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/21%20-%2002%20-%202025%20---%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/21%20-%2002%20-%202025%20---%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/21%20-%2002%20-%202025%20---%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201261.%20Find%20Elements%20in%20a%20Contaminated%20Binary%20Tree.js) |
