# 108. Convert Sorted Array to Binary Search Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/"><strong>➥ ♻️ 108 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![108 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/d19a0a48-91c3-4210-b9f6-8ee9bfc2ce0e)

  ### Input  ➤ nums = [-10,-3,0,5,9]

  ### Output  ➤ [0,-3,9,-10,null,5]

  ### Explanation  ➤ [0,-10,5,null,-3,null,9] is also accepted:

![108 que 1 ](https://github.com/Prakhar-002/LEETCODE/assets/136890202/2789e5f8-1ddd-4679-8440-aa432130631c)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![108 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/73b8faed-fcd1-44ef-8c0a-80ec16f58661)

  ### Input ➤ nums = [1,3]

  ### Output  ➤ [3,1] 

  ### Explanation ➤ [1,null,3] and [3,1] are both height-balanced BSTs.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^4**
- **-10^4 <= nums[i] <= 10^4**
- **`nums` is sorted in a `strictly increasing` order.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Divide and Conquer**
3. **Tree**
4. **Binary Search Tree**
5. **Binary Tree**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20108.%20Convert%20Sorted%20Array%20to%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96%20-%20Copy/%F0%9F%8D%81JAVA_108_ConvertSortedArrayToBinarySearchTree.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20108.%20Convert%20Sorted%20Array%20to%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96%20-%20Copy/%F0%9F%8E%B2CPP_108_ConvertSortedArrayToBinarySearchTree.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20108.%20Convert%20Sorted%20Array%20to%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96%20-%20Copy/%F0%9F%8D%B0PYTHON_108_ConvertSortedArrayToBinarySearchTree.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20108.%20Convert%20Sorted%20Array%20to%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96%20-%20Copy/%E2%98%83%EF%B8%8FJAVASCRIPT_108_ConvertSortedArrayToBinarySearchTree.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20108.%20Convert%20Sorted%20Array%20to%20Binary%20Search%20Tree%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96%20-%20Copy/%F0%9F%92%96C_108_ConvertSortedArrayToBinarySearchTree.c)  |

