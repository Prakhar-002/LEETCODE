# 2163. Minimum Difference in Sums After Removal of Elements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-difference-in-sums-after-removal-of-elements/description/?envType=daily-question&envId=2025-07-18"><strong>➥ ☢️ 2193 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of size `n`, where `n` is a multiple of 3.

### Your task is to perform the following operations:

1. Remove any subsequence of elements from `nums` with a length of exactly `n`.
2. The remaining `2 * n` elements are divided into two equal parts:
    - The first `n` elements form the `first` part, and their sum is `sumfirst`.
    - The next `n` elements form the `second` part, and their sum is `sumsecond`.
3. The "difference in sums" is calculated as `sumfirst - sumsecond`.

For example, if `sumfirst = 3` and `sumsecond = 2`, the difference is 1. Conversely, if `sumfirst = 2` and `sumsecond = 3`, the difference is -1.

Your objective is to return the *minimum* possible difference between the sums of the two parts after you remove the `n` elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,1,2]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ Here, nums has 3 elements, so n = 1.
Thus we have to remove 1 element from nums and divide the array into two equal parts.

- If we remove nums[0] = 3, the array will be [1,2]. The difference in sums of the two parts will be 1 - 2 = -1.
- If we remove nums[1] = 1, the array will be [3,2]. The difference in sums of the two parts will be 3 - 2 = 1.
- If we remove nums[2] = 2, the array will be [3,1]. The difference in sums of the two parts will be 3 - 1 = 2.

The minimum difference between sums of the two parts is min(-1,1,2) = -1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [7,9,5,8,1,3]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ Here n = 2. So we must remove 2 elements and divide the remaining array into two parts containing two elements each.
If we remove nums[2] = 5 and nums[3] = 8, the resultant array will be [7,9,1,3]. The difference in sums will be (7+9) - (1+3) = 12.

To obtain the minimum difference, we should remove nums[1] = 9 and nums[4] = 1. The resultant array becomes [7,5,8,3]. The difference in sums of the two parts is (7+5) - (8+3) = 1.
It can be shown that it is not possible to obtain a difference smaller than 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 nums.length == 3 * n </br>

🔹 1 <= n <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Dynamic Programming**  </br>

🔸 **Heap (Priority Queue)**  </br>

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

<img src ="https://github.com/user-attachments/assets/9702525e-caed-434d-aff8-870dd12e9f76" width = "700px" height="462px" />

</h1>
