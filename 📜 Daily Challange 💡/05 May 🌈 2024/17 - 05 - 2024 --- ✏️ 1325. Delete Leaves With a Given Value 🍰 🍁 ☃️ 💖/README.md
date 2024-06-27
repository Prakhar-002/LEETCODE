# 1325. Delete Leaves With a Given Value

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-leaves-with-a-given-value/description/?envType=daily-question&envId=2024-05-17"><strong>➥ ☢️ 1325 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary tree `root` and an integer `target`, delete all the `leaf` nodes with value `target`.

### Note that once you delete a leaf node with value `target`, if its parent node becomes a leaf node and has the value `target`, it should also be deleted (you need to continue doing that until you cannot).



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1325 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/fe78be84-738d-48e3-b8f6-20b57b053210)


  ### Input  ➤ root = [1,2,3,2,null,2,4], target = 2

  ### Output  ➤ [1,null,3,null,4]

  ### Explanation  ➤ Leaf nodes in green with value (target = 2) are removed (Picture in left). </br> After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1325 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/38e3f1d9-c191-4126-9c3d-009b0756eed1)


  ### Input ➤ root = [1,3,3,3,2], target = 3

  ### Output  ➤ [1,3,null,null,2]


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![1325 que 3](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/f2b93422-ec09-4e9c-922e-5b35dadcf261)


  ### Input ➤ root = [1,2,null,2,null,2], target = 2

  ### Output  ➤ [1]

  ### Explanation  ➤  Leaf nodes in green with value (target = 2) are removed at each step.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range [1, 3000].**
- **1 <= Node.val, target <= 1000**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Depth-First Search**
3. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/17%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201325.%20Delete%20Leaves%20With%20a%20Given%20Value%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1325_DeleteLeavesWithaGivenValue.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/17%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201325.%20Delete%20Leaves%20With%20a%20Given%20Value%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1325_DeleteLeavesWithaGivenValue.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/17%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201325.%20Delete%20Leaves%20With%20a%20Given%20Value%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1325_DeleteLeavesWithaGivenValue.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/17%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201325.%20Delete%20Leaves%20With%20a%20Given%20Value%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%92%96C_1325_DeleteLeavesWithaGivenValue.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/delete-leaves-with-a-given-value/solutions/5170793/beats-100-java-python-c-js-line-by-line-explanation-best-approach)  |
