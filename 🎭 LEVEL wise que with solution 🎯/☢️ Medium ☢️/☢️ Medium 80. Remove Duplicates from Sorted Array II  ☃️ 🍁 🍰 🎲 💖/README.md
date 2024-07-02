# 80. Remove Duplicates from Sorted Array II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/"><strong>➥ ☢️ 80 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums` sorted in `non-decreasing order`, remove some duplicates in-place such that each unique element appears at most twice. The `relative order` of the elements should be kept the `same`.

### Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

### Return *`k` after placing the final result in the first `k` slots of `nums`*.

### Do `not` allocate extra space for another array. You must do this by `modifying the input array` in-place with O(1) extra memory.

## Custom Judge  ➤ The judge will test your solution with the following code:

    int[] nums = [...]; // Input array
    int[] expectedNums = [...]; // The expected answer with correct length

    int k = removeDuplicates(nums); // Calls your implementation

    assert k == expectedNums.length;
    for (int i = 0; i < k; i++) {
        assert nums[i] == expectedNums[i];
    }


### If all assertions pass, then your solution will be `accepted`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ nums = [1,1,1,2,2,3]

  ### 📤 Output  ➤  5, nums = [1,1,2,2,3,_]

  ### 🔦 Explanation  ➤  Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.</br> It does not matter what you leave beyond the returned k (hence they are underscores).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  nums = [0,0,1,1,1,1,2,3,3]

  ### 📤 Output  ➤ 7, nums = [0,0,1,1,2,3,3,_,_]

  ### 🔦 Explanation ➤  Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively. </br> It does not matter what you leave beyond the returned k (hence they are underscores).
 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 3 * 10^4** </br>
🔹 **-10^4 <= nums[i] <= 10^4** </br>
🔹 **`nums` is sorted in `non-decreasing` order.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2080.%20Remove%20Duplicates%20from%20Sorted%20Array%20II%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-80-RemoveDuplicatesFromSortedArray-II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2080.%20Remove%20Duplicates%20from%20Sorted%20Array%20II%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-80-RemoveDuplicatesFromSortedArray-II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2080.%20Remove%20Duplicates%20from%20Sorted%20Array%20II%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-80-RemoveDuplicatesFromSortedArray-II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2080.%20Remove%20Duplicates%20from%20Sorted%20Array%20II%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-80-RemoveDuplicatesFromSortedArray-II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%2080.%20Remove%20Duplicates%20from%20Sorted%20Array%20II%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-80-RemoveDuplicatesFromSortedArray-II.c)  |

