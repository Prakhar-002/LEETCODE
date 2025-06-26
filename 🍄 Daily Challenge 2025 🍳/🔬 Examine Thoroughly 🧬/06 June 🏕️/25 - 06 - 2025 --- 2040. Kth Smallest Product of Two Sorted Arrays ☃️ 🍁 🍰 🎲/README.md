# 2040. Kth Smallest Product of Two Sorted Arrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kth-smallest-product-of-two-sorted-arrays/description/?envType=daily-question&envId=2025-06-26"><strong>➥ 🫀 2040 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two sorted, 0-indexed integer arrays, `nums1` and `nums2`, along with an integer `k`. Your objective is to find the k<sup>th</sup> (1-based) smallest product of the form `nums1[i] * nums2[j]`, where `0 <= i < nums1.length` and `0 <= j < nums2.length`.

### In other words, if you were to create a sorted list of all possible products of pairs of elements from `nums1` and `nums2`, you want to find the element at index `k` in that sorted list (remembering that the list uses 1-based indexing).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [2,5], nums2 = [3,4], k = 2

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ The 2 smallest products are:

- nums1[0] * nums2[0] = 2 * 3 = 6
- nums1[0] * nums2[1] = 2 * 4 = 8

The 2nd smallest product is 8.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [-4,-2,0,3], nums2 = [2,4], k = 6

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ The 6 smallest products are:

- nums1[0] * nums2[1] = (-4) * 4 = -16
- nums1[0] * nums2[0] = (-4) * 2 = -8
- nums1[1] * nums2[1] = (-2) * 4 = -8
- nums1[1] * nums2[0] = (-2) * 2 = -4
- nums1[2] * nums2[0] = 0 * 2 = 0
- nums1[2] * nums2[1] = 0 * 4 = 0

The 6th smallest product is 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [-2,-1,0,1,2], nums2 = [-3,-1,2,4,5], k = 3

  ### 📤 `Output`  ➤ -6

  ### 🔦 `Explanation` ➤ The 3 smallest products are:

- nums1[0] * nums2[4] = (-2) * 5 = -10
- nums1[0] * nums2[3] = (-2) * 4 = -8
- nums1[4] * nums2[0] = 2 * (-3) = -6

The 3rd smallest product is -6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums1.length, nums2.length <= 5 * 10<sup>4</sup> </br>

🔹 -10<sup>5</sup> <= nums1[i], nums2[j] <= 10<sup>5</sup> </br>

🔹 1 <= k <= nums1.length * nums2.length </br>

🔹 nums1 and nums2 are sorted. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
