# 26. Remove Duplicates from Sorted Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ♻️ 26 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums` sorted in `non-decreasing order`, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the `same`. Then return *the number of unique elements in `nums`*.

### Consider the number of unique elements of `nums` to be k, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.

- Return `k`.

## Custom Judge ⚙️ ˋ°•*⁀➷

    // Input array
    int[] nums = [...];
    // The expected answer with correct length
    int[] expectedNums = [...]; 

    // Calls your implementation
    int k = removeDuplicates(nums); 

    assert k == expectedNums.length;
    for (int i = 0; i < k; i++) {
        assert nums[i] == expectedNums[i];
    }

### If all assertions pass, then your solution will be `accepted`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ nums = [1,1,2]

  ### 📤 Output  ➤  2, nums = [1,2,_]

  ### 🔦 Explanation  ➤ Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.</br> It does not matter what you leave beyond the returned k (hence they are underscores).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ nums = [0,0,1,1,1,2,2,3,3,4]

  ### 📤 Output  ➤ 5, nums = [0,1,2,3,4,_,_,_,_,_]

  ### 🔦 Explanation ➤ Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.</br> It does not matter what you leave beyond the returned k (hence they are underscores).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 3 * 10<sup>4</sup>** </br>
🔹 **`-100 <= nums[i] <= 100`** </br>
🔹 **`nums` is sorted in `non-decreasing` order.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20-%F0%9F%A5%A1%20Must-do%20List%20for%20Interview%20Prep/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2003%20%F0%9F%8D%A2%2026.%20Remove%20Duplicates%20from%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%2026.%20Re.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20-%F0%9F%A5%A1%20Must-do%20List%20for%20Interview%20Prep/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2003%20%F0%9F%8D%A2%2026.%20Remove%20Duplicates%20from%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%2026.%20Remo.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20-%F0%9F%A5%A1%20Must-do%20List%20for%20Interview%20Prep/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2003%20%F0%9F%8D%A2%2026.%20Remove%20Duplicates%20from%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%2026.%20Re.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20-%F0%9F%A5%A1%20Must-do%20List%20for%20Interview%20Prep/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2003%20%F0%9F%8D%A2%2026.%20Remove%20Duplicates%20from%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2026.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20-%F0%9F%A5%A1%20Must-do%20List%20for%20Interview%20Prep/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2003%20%F0%9F%8D%A2%2026.%20Remove%20Duplicates%20from%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%2026.%20Remove%20D.c)  |
