# 2191. Sort the Jumbled Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sort-the-jumbled-numbers/description/?envType=daily-question&envId=2024-07-24"><strong>➥ ☢️ 2191 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` integer array `mapping` which represents the mapping rule of a shuffled decimal system. `mapping[i] = j` means digit `i` should be mapped to digit `j` in this system.

### The `mapped value` of an integer is the new integer obtained by replacing each occurrence of digit `i` in the integer with `mapping[i]` for all `0 <= i <= 9`.

### You are also given another integer array `nums`. Return the array `nums` sorted in `non-decreasing` order based on the `mapped values` of its elements.

##### Notes 📝 ˋ°•*⁀➷

- Elements with the same mapped values should appear in the `same relative order` as in the input.

- The elements of `nums` should only be sorted based on their mapped values and `not be replaced` by them.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]

  ### 📤 Output  ➤ [338,38,991]

  ### 🔦 Explanation  ➤ 
    Map the number 991 as follows:
    1 ➺ mapping[9] = 6, so all occurrences of the digit 9 will become 6.
    
    2 ➺ mapping[1] = 9, so all occurrences of the digit 1 will become 9.

    Therefore, the mapped value of 991 is 669.

    338 maps to 007, or 7 after removing the leading zeros.

    38 maps to 07, which is also 7 after removing leading zeros.

    Since 338 and 38 share the same mapped value, they 
    should remain in the same relative order, so 338 comes before 38.

    Thus, the sorted array is [338,38,991].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ mapping = [0,1,2,3,4,5,6,7,8,9], nums = [789,456,123]

  ### 📤 Output  ➤ [123,456,789]

  ### 🔦 Explanation ➤ 789 maps to 789, 456 maps to 456, and 123 maps to 123. Thus, the sorted array is [123,456,789].


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`mapping.length == 10`** </br>
🔹 **`0 <= mapping[i] <= 9`** </br>
🔹 **All the values of `mapping[i]` are unique.** </br>
🔹 **1 <= nums.length <= 3 * 10<sup>4</sup>** </br>
🔹 **0 <= nums[i] < 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sorting**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/24%20-%2007%20-%202024%20---%202191.%20Sort%20the%20Jumbled%20Numbers%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2191-SortTheJumbledNumbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/24%20-%2007%20-%202024%20---%202191.%20Sort%20the%20Jumbled%20Numbers%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2191-SortTheJumbledNumbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/24%20-%2007%20-%202024%20---%202191.%20Sort%20the%20Jumbled%20Numbers%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2191-SortTheJumbledNumbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/24%20-%2007%20-%202024%20---%202191.%20Sort%20the%20Jumbled%20Numbers%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2191-SortTheJumbledNumbers.js) |
