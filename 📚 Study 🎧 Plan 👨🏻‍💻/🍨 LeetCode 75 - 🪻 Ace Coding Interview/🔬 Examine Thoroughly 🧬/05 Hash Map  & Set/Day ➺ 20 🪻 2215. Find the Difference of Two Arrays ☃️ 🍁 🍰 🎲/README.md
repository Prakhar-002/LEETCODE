# 2215. Find the Difference of Two Arrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-difference-of-two-arrays/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ♻️ 2215 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two 0-indexed integer arrays `nums1` and `nums2`, return *a list `answer` of size `2` where*:

- `answer[0]` *is a list of all distinct integers in `nums1` which are not present in* `nums2`.

- `answer[1]` *is a list of all distinct integers in `nums2` which are not present in* `nums1`.

### Note that the integers in the lists may be returned in `any` order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [1,2,3], nums2 = [2,4,6]

  ### 📤 `Output`  ➤ [[1,3],[4,6]]

  ### 🔦 `Explanation`  ➤ 

➺ For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

➺ For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [1,2,3,3], nums2 = [1,1,2,2]

  ### 📤 `Output`  ➤ [[3],[]]

  ### 🔦 `Explanation` ➤ 

➺ For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].

➺ Every integer in nums2 is present in nums1. Therefore, answer[1] = [].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums1.length, nums2.length <= 1000`** </br>

🔹 **`-1000 <= nums1[i], nums2[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
