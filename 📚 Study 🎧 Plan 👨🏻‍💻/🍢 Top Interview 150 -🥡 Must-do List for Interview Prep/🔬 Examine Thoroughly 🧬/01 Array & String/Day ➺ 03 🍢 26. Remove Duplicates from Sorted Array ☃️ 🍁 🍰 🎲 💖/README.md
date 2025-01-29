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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
