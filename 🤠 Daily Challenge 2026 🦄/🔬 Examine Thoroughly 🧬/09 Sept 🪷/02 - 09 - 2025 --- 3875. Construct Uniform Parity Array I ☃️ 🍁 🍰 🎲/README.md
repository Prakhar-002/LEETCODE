# 3875. Construct Uniform Parity Array I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-uniform-parity-array-i/description/?envType=daily-question&envId=2026-09-02"><strong>➥ ☢️ 3875 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums1` of `n` distinct integers.

### You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either all odd or all even.

### For each index `i`, you must choose exactly one of the following (in any order):
- `nums2[i] = nums1[i]`
- `nums2[i] = nums1[i] - nums1[j]`, for an index `j != i`

### Return `true` if it is possible to construct such an array, otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums1 = [2,3]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ Choose `nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1`. Choose `nums2[1] = nums1[1] = 3`. `nums2 = [-1, 3]`, and both elements are odd. Thus, the answer is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums1 = [4,6]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation` ➤ ➺ Choose `nums2[0] = nums1[0] = 4`. Choose `nums2[1] = nums1[1] = 6`. `nums2 = [4, 6]`, and all elements are even. Thus, the answer is true.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums1 = [1,5,9]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺ All elements in `nums1` are already odd, so we can directly choose `nums2[i] = nums1[i]` for all indices, giving `nums2 = [1, 5, 9]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n == nums1.length <= 100`** </br>

🔹 **`1 <= nums1[i] <= 100`** </br>

🔹 **`nums1` consists of distinct integers.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sept%20%F0%9F%AA%B7/02%20-%2009%20-%202025%20---%203875.%20Construct%20Uniform%20Parity%20Array%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203875.%20Construct%20Uniform%20Parity%20Array%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sept%20%F0%9F%AA%B7/02%20-%2009%20-%202025%20---%203875.%20Construct%20Uniform%20Parity%20Array%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203875.%20Construct%20Uniform%20Parity%20Array%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sept%20%F0%9F%AA%B7/02%20-%2009%20-%202025%20---%203875.%20Construct%20Uniform%20Parity%20Array%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203875.%20Construct%20Uniform%20Parity%20Array%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sept%20%F0%9F%AA%B7/02%20-%2009%20-%202025%20---%203875.%20Construct%20Uniform%20Parity%20Array%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203875.%20Construct%20Uniform%20Parity%20Array%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5c8d4b3c-3026-464b-b8e9-b2de106afd06" width = "700px" height="462px" />

</h1>
