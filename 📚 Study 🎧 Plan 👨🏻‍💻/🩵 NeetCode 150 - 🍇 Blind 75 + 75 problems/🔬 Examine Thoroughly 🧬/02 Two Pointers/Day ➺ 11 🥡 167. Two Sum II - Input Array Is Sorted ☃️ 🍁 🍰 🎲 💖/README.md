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

- **2 <= numbers.length <= 3 * 10<sup>4</sup>**
- **`-1000 <= numbers[i] <= 1000`**
- **`numbers` is sorted in non-decreasing order.**
- **`-1000 <= target <= 1000`**
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2011%20%F0%9F%A5%A1%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20167.%20Two%20Sum%20II%20-%20Inp.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2011%20%F0%9F%A5%A1%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20167.%20Two%20Sum%20II%20-%20Input.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2011%20%F0%9F%A5%A1%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20167.%20Two%20Sum%20II%20-%20Inp.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2011%20%F0%9F%A5%A1%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20167.%20Two%20Sum%20II%20-.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2011%20%F0%9F%A5%A1%20167.%20Two%20Sum%20II%20-%20Input%20Array%20Is%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20167.%20Two%20Sum%20II%20-%20Input%20Arr.c)  |
