# 167. Two Sum II - Input Array Is Sorted

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/"><strong>➥ ☢️ 167 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a `1-indexed` array of `integers` numbers that is already sorted in `non-decreasing order`, find two numbers such that they add up to a specific `target` number. Let these two numbers be `numbers[index1] and numbers[index2]` where `1 <= index1 < index2 <= numbers.length`.

### Return *the indices of the two numbers, `index1` and `index2`, added by one as an integer array `[index1, index2]` of length 2*.

### The tests are generated such that there is `exactly one solution`. You may not use the same element twice.

### Your solution must use only constant extra space.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input ➤ numbers = [2,7,11,15], target = 9

  ### Output ➤ [1,2]

  ### Explanation ➤ The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ numbers = [2,3,4], target = 6 

  ### Output ➤ [1,3]

  ### Explanation ➤ The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ numbers = [-1,0], target = -1

  ### Output ➤ [1,2]

  ### Explanation ➤ The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **2 <= numbers.length <= 3 * 10^4**
- **-1000 <= numbers[i] <= 1000**
- **`numbers` is sorted in non-decreasing order.**
- **-1000 <= target <= 1000**
- **The tests are generated such that there is `exactly one solution`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Two Pointers**
3. **Binary Search**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_167_TwoSum-II-InputArrayIsSorted.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_167_TwoSum-II-InputArrayIsSorted.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_167_TwoSum-II-InputArrayIsSorted.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_167_TwoSum-II-InputArrayIsSorted.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_167_TwoSum-II-InputArrayIsSorted.c)  |
