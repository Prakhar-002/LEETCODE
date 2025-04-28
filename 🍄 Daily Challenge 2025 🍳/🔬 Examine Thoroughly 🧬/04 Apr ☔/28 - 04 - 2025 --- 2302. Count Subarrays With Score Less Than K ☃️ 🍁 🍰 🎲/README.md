# 2302. Count Subarrays With Score Less Than K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-subarrays-with-score-less-than-k/description/?envType=daily-question&envId=2025-04-28"><strong>➥ 🫀 2302 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The *score* of an array is defined as the product of its sum and its length.

- For example, the score of `[1, 2, 3, 4, 5]` is `(1 + 2 + 3 + 4 + 5) * 5 = 75`.

### You are given a positive integer array `nums` and an integer `k`. The objective is to return the number of non-empty subarrays of `nums` whose *score* is strictly less than `k`.

### A subarray is a contiguous (connected) sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,1,4,3,5], k = 10

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ The 6 subarrays having scores less than 10 are:

- [2] with score 2 \* 1 = 2.
- [1] with score 1 \* 1 = 1.
- [4] with score 4 \* 1 = 4.
- [3] with score 3 \* 1 = 3.
- [5] with score 5 \* 1 = 5.
- [2,1] with score (2 + 1) \* 2 = 6.

### Note that subarrays such as [1,4] and [4,3,5] are not considered because their scores are 10 and 36 respectively, while we need scores strictly less than 10.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1], k = 5

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ Every subarray except [1,1,1] has a score less than 5.</br></br> [1,1,1] has a score (1 + 1 + 1) * 3 = 9, which is greater than 5.</br></br> Thus, there are 5 subarrays having scores less than 5.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [10, 9, 8], k = 100

  ### 📤 `Output`  ➤ 2

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>5</sup> </br>

🔹 1 <= k <= 10<sup>15</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Sliding Window**  </br>
🔸 **Prefix Sum**  </br>

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
