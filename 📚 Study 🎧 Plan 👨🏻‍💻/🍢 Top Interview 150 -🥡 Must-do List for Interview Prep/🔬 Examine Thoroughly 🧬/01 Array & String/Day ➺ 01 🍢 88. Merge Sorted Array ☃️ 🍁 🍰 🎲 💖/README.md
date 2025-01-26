# 88. Merge Sorted Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ☢️ 88 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

### Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

### The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first m elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

  ### 📤 `Output`  ➤ [1,2,2,3,5,6]

  ### 🔦 `Explanation`  ➤ The arrays we are merging are [1,2,3] and [2,5,6].</br> The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [1], m = 1, nums2 = [], n = 0

  ### 📤 `Output`  ➤ [1]

  ### 🔦 `Explanation` ➤ The arrays we are merging are [1] and [].</br> The result of the merge is [1].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [0], m = 0, nums2 = [1], n = 1

  ### 📤 `Output`  ➤ [1]

  ### 🔦 `Explanation`  ➤ The arrays we are merging are [] and [1].</br> The result of the merge is [1].</br> Note that because m = 0, there are no elements in nums1.</br> The 0 is only there to ensure the merge result can fit in nums1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`nums1.length == m + n`** </br>

🔹 **`nums2.length == n`** </br>

🔹 **`0 <= m, n <= 200`** </br>

🔹 **`1 <= m + n <= 200`** </br>

🔹 **-10<sup>9</sup> <= nums1[i], nums2[j] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
