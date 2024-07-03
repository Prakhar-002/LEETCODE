# 27. Remove Element

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-element/description/"><strong>➥ ♻️ 27 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return *the number of elements in `nums` which are not equal to `val`*.

### Consider the number of elements in `nums` which are not equal to `val` be k, to get accepted, you need to do the following things:

- Change the array `nums` such that the first k elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important as well as the size of `nums`.

- Return `k`.

## Custom Judge ⚙️ ˋ°•*⁀➷

### The judge will test your solution with the following code:

    //! Input array
    int[] nums = [...]; 

    //! Value to remove
    int val = ...; 

    //! The expected answer with correct length.
    int[] expectedNums = [...];
    //! It is sorted with no values equaling val.

    //! Calls your implementation
    int k = removeElement(nums, val); 

    assert k == expectedNums.length;

    // Sort the first k elements of nums
    sort(nums, 0, k); 
    for (int i = 0; i < actualLength; i++) {
        assert nums[i] == expectedNums[i];
    }

### If all assertions pass, then your solution will be accepted.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ nums = [3,2,2,3], val = 3

  ### 📤 Output  ➤ 2, nums = [2,2,_,_]

  ### 🔦 Explanation  ➤ Your function should return k = 2, with the first two elements of nums being 2.</br> It does not matter what you leave beyond the returned k (hence they are underscores).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  nums = [0,1,2,2,3,0,4,2], val = 2

  ### 📤 Output  ➤ 5, nums = [0,1,4,0,3,_,_,_]

  ### 🔦 Explanation ➤ Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.</br> Note that the five elements can be returned in any order.</br> It does not matter what you leave beyond the returned k (hence they are underscores).



</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **0 <= nums.length <= 100** </br>
🔹 **0 <= nums[i] <= 50** </br>
🔹 **0 <= val <= 100** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2027.%20Remove%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-27-RemoveElement.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2027.%20Remove%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-27-RemoveElement.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2027.%20Remove%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-27-RemoveElement.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2027.%20Remove%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-27-RemoveElement.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%2027.%20Remove%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-27-RemoveElement.c)  |

